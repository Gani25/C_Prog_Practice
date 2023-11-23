// Check greatest of 2 number
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Please enter first number: ");
    scanf("%d", &n1);
    printf("Please enter second number: ");
    scanf("%d", &n2);

    if(n1>n2)
    {
        printf("n1 is greater");
    }
    else
    {
        printf("n2 is greater");
    }

    return 0;
}