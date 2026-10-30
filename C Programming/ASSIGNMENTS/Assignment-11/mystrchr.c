#include <stdio.h>

char* mystrchr(char str[], char ch);

int main()
{
    char str[] = "FirstBit";
    char ch = 'i';

    char *result = mystrchr(str, ch);

    if(result != NULL)
    {
        printf("Character found : %s", result);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}

char* mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return &str[i];
        }

        i++;
    }

    return NULL;
}