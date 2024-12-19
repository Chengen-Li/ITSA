#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n--){
        int m;
        scanf("%d",&m);
        int square=m*m;
        int cube=m*m*m;
        printf("%d %d %d\n", m, square, cube);
    }
    return 0;
}
