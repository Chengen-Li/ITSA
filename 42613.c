#include <stdio.h>

int gcd(int a, int b){
    while (b!=0){
        int temp=b;
        b=a%b; // a除以b的餘數
        a=temp; // 更新a為b
    }
    return a; // 最後的a是最大公因數
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}