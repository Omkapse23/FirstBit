#include <stdio.h>

void checkCase(char *ch);

int main()
{
    char ch = 'A';

    checkCase(&ch);

    return 0;
}

void checkCase(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("Uppercase");
    else if(*ch >= 'a' && *ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an Alphabet");
}