#include <stdio.h>

int main()
{
    int start_year = 2001;
    int end_year = 2100;

    printf("Leap years between %d and %d are:   \n", start_year, end_year);

    for (int year = start_year; year <= end_year; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d\n", year);
        }
    }

    return 0;
}
