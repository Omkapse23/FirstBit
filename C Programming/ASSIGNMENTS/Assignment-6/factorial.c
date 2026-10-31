#include <stdio.h>

// // Without parameter and without return value
// void factorial();

// int main()
// {
//     factorial();
//     return 0;
// }

// void factorial()
// {
//     int n = 5, fact = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial = %d", fact);
// }




// // With parameter and without return value
// void factorial(int n);

// int main()
// {
//     int n = 5;

//     factorial(n);
//     return 0;
// }

// void factorial(int n)
// {
//     int fact = 1;

//     for( int  i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial = %d", fact);
// }





// //Without parameter and with return value
// int factorial();

// int main()
// {
//     printf("Factorial = %d", factorial());
//     return 0;
// }

// int factorial()
// {
//     int n = 5, fact = 1;

//     for(int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }



//With parameter and with return value
int factorial(int n);

int main()
{
    int n = 5;

    printf("Factorial = %d", factorial(n));

    return 0;
}

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}