#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "FirstBit";
    char str2[50] = "Solutions";
    char str3[50];
    char str4[50];

    // 1. strlen()
    printf("1. Length = %zu\n", strlen(str1));

    // 2. strcpy()
    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    // 3. strncpy()
    strncpy(str3, str1, 5);
    str3[5] = '\0';
    printf("3. strncpy = %s\n", str3);

    // 4. strcat()
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("4. strcat = %s\n", str3);

    // 5. strncat()
    strcpy(str3, str1);
    strncat(str3, str2, 3);
    printf("5. strncat = %s\n", str3);

    // 6. strcmp()
    printf("6. strcmp = %d\n", strcmp(str1, str2));

    // 7. strncmp()
    printf("7. strncmp = %d\n", strncmp(str1, str2, 3));

    // 8. strchr()
    printf("8. strchr = %s\n", strchr(str1, 'B'));

    // 9. strrchr()
    printf("9. strrchr = %s\n", strrchr(str1, 'i'));

    // 10. strstr()
    printf("10. strstr = %s\n", strstr(str1, "Bit"));

    // 11. strtok()
    strcpy(str4, "Java-C-SQL");
    printf("11. strtok = %s\n", strtok(str4, "-"));

    // 12. strspn()
    printf("12. strspn = %zu\n", strspn("12345ABC", "1234567890"));

    // 13. strcspn()
    printf("13. strcspn = %zu\n", strcspn("FirstBit123", "123"));

    // 14. strpbrk()
    printf("14. strpbrk = %s\n", strpbrk("FirstBit", "aeiou"));

    // 15. memset()
    strcpy(str3, "Hello");
    memset(str3, '*', 3);
    printf("15. memset = %s\n", str3);

    // 16. memcmp()
    printf("16. memcmp = %d\n", memcmp("abc", "abc", 3));

    // 17. memcpy()
    memcpy(str3, str1, strlen(str1) + 1);
    printf("17. memcpy = %s\n", str3);

    // 18. memmove()
    memmove(str3 + 2, str3, 5);
    str3[7] = '\0';
    printf("18. memmove = %s\n", str3);

    // 19. strrev()
    strcpy(str3, str1);
    strrev(str3);
    printf("19. strrev = %s\n", str3);

    // 20. strupr()
    strcpy(str3, str1);
    strupr(str3);
    printf("20. strupr = %s\n", str3);

    // 21. strlwr()
    strcpy(str3, str1);
    strlwr(str3);
    printf("21. strlwr = %s\n", str3);

    return 0;
}