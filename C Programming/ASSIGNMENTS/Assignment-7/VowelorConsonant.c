#include <stdio.h>

void vowel(char *ch);

int main()
{
    char ch = 'a';

    vowel(&ch);

    return 0;
}

void vowel(char *ch)
{
    if(*ch == 'a' || *ch == 'e' || *ch == 'i' ||
       *ch == 'o' || *ch == 'u' || *ch == 'A' ||
       *ch == 'E' || *ch == 'I' || *ch == 'O' ||
       *ch == 'U')
        printf("Vowel");
    else
        printf("Consonant");
}