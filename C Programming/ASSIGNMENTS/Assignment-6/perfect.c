#include <stdio.h>

// // Without parameter and without return value
// void perfect();

// int main()
// {
//     perfect();
//     return 0;
// }

// void perfect()
// {
//     int n = 28, sum = 0;

//     for(int i = 1; i < n; i++)
//     {
//         if(n % i == 0)
//             sum = sum + i;
//     }

//     if(sum == n)
//         printf("Perfect");
//     else
//         printf("Not Perfect");
// }




// //With parameter and without return value
// void perfect(int n);

// int main()
// {
//     int n = 28;

//     perfect(n);
//     return 0;
// }

// void perfect(int n)
// {
//     int sum = 0;

//     for(int i = 1; i < n; i++)
//     {
//         if(n % i == 0)
//             sum = sum + i;
//     }

//     if(sum == n)
//         printf("Perfect");
//     else
//         printf("Not Perfect");
// }




// // Without parameter and with return value
// int perfect();

// int main()
// {
//     if(perfect() == 1)
//         printf("Perfect");
//     else
//         printf("Not Perfect");

//     return 0;
// }

// int perfect()
// {
//     int n = 28, sum = 0;

//     for( int i = 1; i < n; i++)
//     {
//         if(n % i == 0)
//             sum = sum + i;
//     }

//     if(sum == n)
//         return 1;
//     else
//         return 0;
// }



// With parameter and with return value
#include <stdio.h>

int perfect(int n);

int main()
{
    int n = 28;

    if(perfect(n) == 1)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}

int perfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}