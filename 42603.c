#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    // 計算所需 10 元硬幣數量
    int nt10=n/10;
    n%=10;
    // 計算所需 5 元硬幣數量
    int nt5=n/5;
    n%=5;
    int nt1 = n;
    printf("NT10=%d\n",nt10);
    printf("NT5=%d\n",nt5);
    printf("NT1=%d\n",nt1);
    return 0;
}