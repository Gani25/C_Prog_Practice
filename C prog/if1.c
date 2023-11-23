// WAP to find number is non zero or zero

#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if(n != 0)
    {
        printf("Number is non zero\n");
    }
    else
    {
        printf("Number is zero\n");
    }

    return 0;
}