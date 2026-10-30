#include <stdio.h>

int main() {
    int n, choice, temp, last, rev, sum, i, isPrime;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("\n ----- Menu ----- \n");
    printf("1. To check even Or odd\n");
    printf("2. To check prime or not\n");
    printf("3. To check palindrome or not\n");
    printf("4. To check positive, negative or zero\n");
    printf("5. To reverse a number\n");
    printf("6. To find sum of digits\n");

    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(n % 2 == 0) {
                printf("Even number");
            } else {
                printf("Odd number");
            }
            break;

        case 2:
            if(n<2) {
                isPrime = 0;
            } else {
                isPrime = 1;

                for(i=2; i<n; i++) {
                    if(n%i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if(isPrime == 1) {
                printf("Prime number");
            } else {
                printf("Not prime number");
            }
            break;

        case 3:
            temp = n;
            rev = 0;
            while(temp>0) {
                last = temp % 10;
                rev = rev * 10 + last;
                temp = temp / 10;
            }

            if(rev == n) {
                printf("Palindrome");
            } else {
                printf("Not palindrome");
            }
            break;

        case 4:
            if(n>0) {
                printf("Positive number");
            } else if(n<0) {
                printf("Negative number");
            } else {
                printf("Zero");
            }
            break;

        case 5:
            temp = n;
            rev = 0;

            while(temp>0) {
                last = temp % 10;
                rev = rev * 10 + last;
                temp = temp / 10;
            }

            printf("reverse = %d", rev);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp > 0) {
                last = temp % 10;
                sum = sum + last;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }
}