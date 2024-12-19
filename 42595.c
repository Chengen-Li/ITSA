#include <stdio.h>
int main() {
    double t, b, h;
    scanf("%lf %lf %lf", &t, &b, &h);
    printf("Trapezoid area:%.1f\n", (t + b) * h / 2);
    return 0;
}