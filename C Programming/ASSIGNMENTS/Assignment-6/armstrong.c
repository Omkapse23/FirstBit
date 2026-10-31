#include <stdio.h>

// // Without parameter and without return value
// void armstrong();

// int main()
// {
//     armstrong();
//     return 0;
// }

// void armstrong()
// {
//     int n = 153, temp, rem, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem * rem * rem;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         printf("Armstrong");
//     else
//         printf("Not Armstrong");
// }


// // With parameter and without return value
// void armstrong(int n);

// int main()
// {
//     int n = 153;

//     armstrong(n);
//     return 0;
// }

// void armstrong(int n)
// {
//     int temp, rem, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem * rem * rem;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         printf("Armstrong");
//     else
//         printf("Not Armstrong");
// }






// // Without parameter and with return value
// int armstrong();

// int main()
// {
//     if(armstrong() == 1)
//         printf("Armstrong");
//     else
//         printf("Not Armstrong");

//     return 0;
// }

// int armstrong()
// {
//     int n = 153, temp, rem, sum = 0;

//     temp = n;

//     while(temp > 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem * rem * rem;
//         temp = temp / 10;
//     }

//     if(sum == n)
//         return 1;
//     else
//         return 0;
// }





// With parameter and with return value
int armstrong(int n);

int main()
{
    int n = 153;

    if(armstrong(n) == 1)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

int armstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}