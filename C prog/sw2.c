// check vowel or consonant
#include <stdio.h>
int main()
{

    char alp;
    printf("Please enter alphabet\n");
    scanf("%c", &alp);

    switch (alp)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }
    return 0;
}