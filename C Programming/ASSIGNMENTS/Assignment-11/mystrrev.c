#include <stdio.h>

void mystrrev(char str[]);

int main()
{
    char str[] = "FirstBit";

    mystrrev(str);

    printf("Reversed string : %s", str);

    return 0;
}

void mystrrev(char str[])
{
    int i = 0;
    int j;
    char temp;

    while(str[i] != '\0')
    {
        i++;
    }

    i = i - 1;
    j = 0;

    while(j < i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        j++;
        i--;
    }
}