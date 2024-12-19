#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int score[n];
    for (int i=0;i<n;i++){
        scanf("%d", &score[i]);
        if (score[i] >= 90) {
            printf("纔单\n");
        } else if (score[i] >= 80) {
            printf("ヒ单\n");
        } else if (score[i] >= 70) {
            printf("单\n");
        } else if (score[i] >= 60) {
            printf("单\n");
        } else {
            printf("ぃの\n");
        }
    }
    return 0;
}
