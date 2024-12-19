#include <stdio.h>
int main() {
    int weight,height;
    scanf("%d %d", &weight,&height);
    double m=height/100.0;
    double bmi=weight/(m*m);
    printf("%.2f\n",bmi);
    return 0;
}