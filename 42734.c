#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int score[n];
    for (int i=0;i<n;i++){
        scanf("%d", &score[i]);
        if (score[i] >= 90) {
            printf("優等\n");
        } else if (score[i] >= 80) {
            printf("甲等\n");
        } else if (score[i] >= 70) {
            printf("乙等\n");
        } else if (score[i] >= 60) {
            printf("丙等\n");
        } else {
            printf("不及格\n");
        }
    }
    return 0;
}
