#include <stdio.h>

// // Without parameter and without return value
// void strong();

// int main()
// {
//     strong();
//     return 0;
// }

// void strong()
// {
//     int n=145, temp, rem,fact, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         fact = 1;

//         for(int i = 1; i <= rem; i++)
//         {
//             fact = fact * i;
//         }

//         sum = sum + fact;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         printf("Strong");
//     else
//         printf("Not Strong");
// }





// // With parameter and without return value
// void strong(int n);

// int main()
// {
//     int n = 145;

//     strong(n);
//     return 0;
// }

// void strong(int n)
// {
//     int temp, rem,fact, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         fact = 1;

//         for(int i = 1; i <= rem; i++)
//         {
//             fact = fact * i;
//         }

//         sum = sum + fact;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         printf("Strong");
//     else
//         printf("Not Strong");
// }




// //Without parameter and with return value
// int strong();

// int main()
// {
//     if(strong() == 1)
//         printf("Strong");
//     else
//         printf("Not Strong");

//     return 0;
// }

// int strong()
// {
//     int n = 145, temp, rem, fact, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         fact = 1;

//         for(int i = 1; i <= rem; i++)
//         {
//             fact = fact * i;
//         }

//         sum = sum + fact;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         return 1;
//     else
//         return 0;
// }




// With parameter and with return value
int strong(int n);

int main()
{
    int n = 145;

    if(strong(n) == 1)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

int strong(int n)
{
    int temp, rem, fact, sum = 0;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        fact = 1;

        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}