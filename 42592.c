#include <stdio.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Triangle area:%.1f\n", (a*b)/2);
    return 0;
}