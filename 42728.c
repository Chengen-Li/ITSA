#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d", &x);

        if (x >= 50 && x <= 70) {
            y = x; 
        } else {
            y = 100; 
        }
        printf("%d\n", y); 
    }
    return 0;
}