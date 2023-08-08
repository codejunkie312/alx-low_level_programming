#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Print an error message to the standard error.
 * @msg: The error message.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * switcher - switch breaker
 * @header: pointer to the ELF header structure
 * @i: index
 * Return: String
 */
char *switcher(Elf64_Ehdr *header, int i)
{
	if (i == 0)
	{
		switch (header->e_ident[EI_OSABI])
		{
			case ELFOSABI_SYSV:
				return ("UNIX - System V");
			case ELFOSABI_NETBSD:
				return ("UNIX - NetBSD");
			case ELFOSABI_SOLARIS:
				return ("UNIX - Solaris");
			default:
				return ("<unknown: 53>");
		}
	}
	if (i == 1)
	{
		if (header->e_ident[EI_DATA] == ELFDATA2LSB)
			return ("2's complement, little endian");
		else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
			return ("2's complement, big endian");
		else
			return ("<unknown: 0x%x>");
	}
	if (i == 2)
	{
		return (header->e_type == ET_EXEC || header->e_type == 512 ?
		"EXEC (Executable file)" : header->e_type == ET_DYN ?
		"DYN (Shared object file)" : "Unknown Type");
	}
	return ("");
}
/**
 * print_elf_header_info - Display information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	const char *osabi;
	const char *elf_class = header->e_ident[EI_CLASS] == ELFCLASS32 ?
		"ELF32" : "ELF64";
	const char *data_format, *type;
	int i;

	data_format = switcher(header, 1);
	osabi = switcher(header, 0);
	type = switcher(header, 2);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
	printf("  Class:                             %s\n", elf_class);
	printf("  Data:                              %s\n", data_format);
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf("  Version:                           %d (current)\n",
				header->e_ident[EI_VERSION]);
	else
		printf("  Version:                           %d\n",
				header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", osabi);
	printf("  ABI Version:                       %d\n",
			header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", type);
	printf("  Entry point address:               0x%x\n",
			       (unsigned int)header->e_entry);
}

/**
 * main - Display the information contained in the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (success) or 98 on error.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open ELF file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: Not an ELF file");

	print_elf_header_info(&header);

	if (close(fd) == -1)
		print_error("Error: Cannot close file descriptor");

	return (0);
}
