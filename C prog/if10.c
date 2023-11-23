// check whther the year is leap year or not

#include <stdio.h>
int main()
{
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("Leap year \n");
    }
    else
    {

        printf("Not a leap year \n");
    }
    return 0;
}
