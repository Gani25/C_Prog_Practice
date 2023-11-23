// Check greatest of 2 number or both are equal
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Please enter first number: ");
    scanf("%d", &n1);
    printf("Please enter second number: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("n1 is greater");
    }
    else if (n2 > n1)
    {
        printf("n2 is greater");
    }
    else
    {
        printf("Both are equal");
    }

    return 0;
}