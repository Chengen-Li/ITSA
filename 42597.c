#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%.0f\n", pow(a + b, 2));
    }
    return 0;
}