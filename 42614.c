#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int maxPrime=0;
    for (int i = n-1;i>1;i--) {
        int isPrime = 1; 
        for (int j=2;j*j<=i;j++) {
            if (i % j==0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            maxPrime = i;
            break;
        }
    }
    printf("%d\n", maxPrime);
    return 0;
}