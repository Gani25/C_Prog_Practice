// Check whether the triangle is equilateral, isosceles or scalene

#include <stdio.h>
int main()
{
    int s1, s2, s3;

    printf("Please enter 3 sides of a triangle: ");

    scanf("%d%d%d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3)
    {
        printf("Equilateral triangle\n");
    }

    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("Isosceles triangle\n");
    }
    else
    {
        printf("Scalene triangle\n");
    }
}