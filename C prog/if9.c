// Check whether the number is divisible by 3 and 5 or not

#include <stdio.h>
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("Number: %d is divisible by 3 and 5 \n", n);
    }
    else
    {
        printf("Number: %d is not divisible by 3 and 5 \n", n);
    }
}