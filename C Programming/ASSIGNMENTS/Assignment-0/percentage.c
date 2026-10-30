#include <stdio.h>

int main() {
    int math = 80;
    int science = 90;
    int english = 70;
    int history = 85;
    int art = 95;

    int total = math + science + english + history + art;
    float percentage = (total / 500.0) * 100;

    printf("%f", percentage);
}