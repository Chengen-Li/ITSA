#include <stdio.h>
int main() {
    int s;
    scanf("%d", &s);
    int hundreds = (s/100) % 10; 
    int tens = (s/10) % 10;
    int ones = s % 10;
    printf("�ʤ� %d\n", hundreds);
    printf("�̤� %d\n", tens);
    printf("���� %d\n", ones);
    return 0;
}