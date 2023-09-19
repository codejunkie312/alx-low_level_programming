#include <stdlib.h>

static int current_call = 0;
static int predefined_numbers[] = {9, 8, 10, 24, 75, 9};

int rand(void)
{
    if (current_call < 5)
        return predefined_numbers[current_call++] - 1;
    else
    {
        current_call = 0;
        return predefined_numbers[5] - 1; 
    }
}
