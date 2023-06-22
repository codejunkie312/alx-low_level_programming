#include "main.h"

int main(void)
{
	int month;
    int day;
    int year;

    month = 11;
    day = 30;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

	return (0);
}
