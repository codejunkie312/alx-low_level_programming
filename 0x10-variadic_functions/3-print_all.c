#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of type of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c;
	int flag = 0;

	va_start(args, format);
	while (format && format[i])
	{
		flag = 1;
		switch (format[i++])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
				break;
		}
		if (format[i] && flag)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
