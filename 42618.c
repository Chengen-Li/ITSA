#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--){
        int x, y;
        scanf("%d %d",&x,&y);
        if (x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        int sum = (y-x+1) * (x+y) / 2;
        printf("%d\n", sum);
    }
    return 0;
}