#include <stdio.h>

void salary(float *basic);

int main()
{
    float basic = 6000;

    salary(&basic);

    return 0;
}

void salary(float *basic)
{
    float da, ta, hra, total;

    if(*basic <= 5000)
    {
        da = *basic * 0.10;
        ta = *basic * 0.20;
        hra = *basic * 0.25;
    }
    else
    {
        da = *basic * 0.15;
        ta = *basic * 0.25;
        hra = *basic * 0.30;
    }

    total = *basic + da + ta + hra;

    printf("Total Salary = %.2f", total);
}