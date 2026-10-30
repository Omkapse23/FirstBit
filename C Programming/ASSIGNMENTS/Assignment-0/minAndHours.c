#include <stdio.h>

int main() {
    int minutes = 150;

    int hours = minutes / 60;
    int remaining = minutes % 60;

    printf("Hours: %d, Minutes: %d", hours, remaining);
}