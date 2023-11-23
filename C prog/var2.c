#include<stdio.h>

int main()
{
    int y = 5; // variable initialization
    float pi = 3.14;
    char alp = 'S';
    double d = 9.15566;

    printf("The value of int is %d\n", y);
    printf("The address of int is %d\n", &y);
    printf("The size of integer variable %d byte\n", sizeof(y));
    
    printf("The size of character variable %d byte\n", sizeof(alp));



    printf("The value of float is %f\n", pi);
    printf("The address of float is %d\n", &pi);

    
}