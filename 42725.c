#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int prime = 0; 
    for (int i=1;i<=n;i++){ 
        if (n%i==0) {
            prime++;
        }
    }
    if (prime==2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}