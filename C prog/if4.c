// Check whether the number is even or odd
// Check whether the number is divisible by 2 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("Number is even");
        // printf("Number is divisible by 2");
    }
    else
    {
        printf("Number is odd");
        // printf("Number is not divisible by 2");
    }
    return 0;
}

/* HW
1. Accept marks of 5 subject and display sum and average
2. Accept age and check eligible for license or not
3. Check whether the number is divisible by 5 or not
*/