// wap to check whether the number is positive or negative
#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if(n>=0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }
        
    return 0;
}