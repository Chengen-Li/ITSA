#include <stdio.h>
int main() {
    int s;
    scanf("%d", &s);
    int hundreds = (s/100) % 10; 
    int tens = (s/10) % 10;
    int ones = s % 10;
    printf("百元 %d\n", hundreds);
    printf("十元 %d\n", tens);
    printf("壹元 %d\n", ones);
    return 0;
}