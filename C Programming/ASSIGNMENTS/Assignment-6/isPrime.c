#include <stdio.h>

// // Without parameter and without return value
// void prime();

// int main()
// {
//     prime();
//     return 0;
// }

// void prime()
// {
//     int n = 7, flag = 0;

//     if(n <= 1)
//         flag = 1;

//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 0)
//         printf("Prime");
//     else
//         printf("Not Prime");
// }




// // With parameter and without return value
// void prime(int n);

// int main()
// {
//     int n = 7;

//     prime(n);
//     return 0;
// }

// void prime(int n)
// {
//     int flag = 0;

//     if(n <= 1)
//         flag = 1;

//     for( int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 0)
//         printf("Prime");
//     else
//         printf("Not Prime");
// }



// // Without parameter and with return value
// int prime();

// int main()
// {
//     if(prime() == 1)
//         printf("Prime");
//     else
//         printf("Not Prime");

//     return 0;
// }

// int prime()
// {
//     int n = 7, flag = 0;

//     if(n <= 1)
//         flag = 1;

//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 0)
//         return 1;
//     else
//         return 0;
// }




//With parameter and with return value
int prime(int n);

int main()
{
    int n = 7;

    if(prime(n) == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

int prime(int n)
{

    if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}