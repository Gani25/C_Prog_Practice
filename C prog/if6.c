// check greatest of 3 number or all are equal
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Please enter 3 number");

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("n1 is greater\n");
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("n2 is greater\n");
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("n3 is greater\n");
    }
    else
    {
        printf("all are equal\n");
    }

    return 0;
}