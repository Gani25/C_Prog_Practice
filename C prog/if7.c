// accept marks of 5 subject and show grades
/*
avg>80-> A grade
avg >60 -> B grade
avg > 45 -> C grade
avg >= 35 -> D grade
fail
*/
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, avg;

    printf("Please enter 5 subject marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    avg = sum / 5;

    printf("Avg marks of 5 subject is %d\n", avg);
    if (avg > 80)
    {
        printf("A grade");
    }
    else if (avg > 60)
    {
        printf("B grade");
    }
    else if (avg > 45)
    {
        printf("C grade");
    }
    else if (avg >= 35)
    {
        printf("D grade");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
/*
8. Check whether the triangle is equilateral, isosceles or scalene
9. Check whether the number is divisible by 3 and 5 or not
10. Check whether the given year is leap year or not
*/