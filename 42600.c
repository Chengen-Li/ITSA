#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        int exponent;
        scanf("%d",&exponent);
        if (exponent>31) {
            printf("Value of more than 31\n");
        } else {
            long long result = 1LL << exponent; //¦ì²¾¹Bºâ
            printf("%lld\n", result);
        }
    }
    return 0;
}