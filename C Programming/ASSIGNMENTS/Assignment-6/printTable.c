#include <stdio.h>

// //Without parameter and without return value
// void table();

// int main() {
//     table();
//     return 0;
// }

// void table() {
//     int n = 5;

//     for(int i = 1; i <= 10; i++)
//     {
//         printf("%d ", n * i);
//     }
// }



// // With parameter and without return value
void table(int n);

int main()
{
    int n = 5;

    table(n);
    return 0;
}

void table(int n)
{

    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", n * i);
    }
}