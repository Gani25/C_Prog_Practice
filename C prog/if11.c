// Check vowel or consonant
// a,e,i,o,u,A,E,I,O,U
#include <stdio.h>
int main()
{
    char alphabet;

    printf("Please enter a alpabet: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == "A" || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
