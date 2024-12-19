#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (i%2!=0) {
            if (i>1) {
                printf(" ");
            }
            printf("%d", i);
        }
    }
    printf("\n"); // ´«¦æ
    return 0;
}
