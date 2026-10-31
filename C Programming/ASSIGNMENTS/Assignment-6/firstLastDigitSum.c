#include <stdio.h>

// // Without parameter and without return value
// void sumDigits();

// int main()
// {
//     sumDigits();
//     return 0;
// }

// void sumDigits()
// {
//     int n=12345, first, last;

//     last = n % 10;

//     while(n >= 10)
//     {
//         n = n / 10;
//     }

//     first = n;

//     printf("Sum = %d", first + last);
// }



// // With parameter and without return value
// void sumDigits(int n);

// int main()
// {
//     int n=12345;

//     sumDigits(n);
//     return 0;
// }

// void sumDigits(int n)
// {
//     int first, last;

//     last = n % 10;

//     while(n >= 10)
//     {
//         n = n / 10;
//     }

//     first = n;

//     printf("Sum = %d", first + last);
// }





// // Without parameter and with return value
// int sumDigits();

// int main()
// {
//     printf("Sum = %d", sumDigits());
//     return 0;
// }

// int sumDigits()
// {
//     int n=12345, first, last;

//     last = n % 10;

//     while(n >= 10)
//     {
//         n = n / 10;
//     }

//     first = n;

//     return first + last;
// }





// With parameter and with return value
int sumDigits(int n);

int main()
{
    int n=12345;

    printf("Sum = %d", sumDigits(n));

    return 0;
}

int sumDigits(int n)
{
    int first, last;

    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    return first + last;
}