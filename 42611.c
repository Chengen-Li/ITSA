#include <stdio.h>

int main() {
    int T, S;
    double salary = 0.0;
    scanf("%d %d", &T, &S);
    if (T <= 60) {
        salary = T*S; // 60 小時以內，按固定時薪計算
    } else if (T <= 120) {
        salary = 60*S+(T-60)*S*1.33; 
    } else salary=60*S+60*S*1.33+(T-120)*S*1.66; 
    
    printf("%.1f\n", salary);
    return 0;
}