#include <stdio.h>

char* mystrstr(char str1[], char str2[]);

int main() {
    char str1[] = "FirstBitSolutions";
    char str2[] = "S";

    char *result = mystrstr(str1, str2);

    if(result != NULL) {
        printf("Substring found : %s", result);
    } else {
        printf("Substring not found");
    }
    return 0;
}

char* mystrstr(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while(str2[j] != '\0')
        {
            if(str1[i + j] != str2[j])
            {
                break;
            }

            j++;
        }

        if(str2[j] == '\0')
        {
            return &str1[i];
        }
    }

    return NULL;
}