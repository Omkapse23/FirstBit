#include <stdio.h>

// // Without parameter and without return value
// void palindrome();

// int main()
// {
//     palindrome();
//     return 0;
// }

// void palindrome()
// {
//     int n=121, temp, rem, rev = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         rev = rev * 10 + rem;
//         temp = temp / 10;
//     }

//     if(rev == n)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");
// }



// // With parameter and without return value
// void palindrome(int n);

// int main()
// {
//     int n = 121;

//     palindrome(n);
//     return 0;
// }

// void palindrome(int n)
// {
//     int temp, rem, rev = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         rev = rev * 10 + rem;
//         temp = temp / 10;
//     }

//     if(rev == n)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");
// }





// //Without parameter and with return value
// int palindrome();

// int main()
// {
//     if(palindrome() == 1)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// }

// int palindrome()
// {
//     int n=121, temp, rem, rev = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         rev = rev * 10 + rem;
//         temp = temp / 10;
//     }

//     if(rev == n)
//         return 1;
//     else
//         return 0;
// }





// With parameter and with return value
int palindrome(int n);

int main()
{
    int n=121;

    if(palindrome(n) == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int palindrome(int n)
{
    int temp, rem, rev = 0;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        return 1;
    else
        return 0;
}