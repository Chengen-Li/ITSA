#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n); 
    int scores[n]; 
    int maxScore=0;
    int above900=0;
    int between600to700=0; 
    int totalScore=0; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        totalScore += scores[i];
        if (scores[i] > maxScore) {
            maxScore = scores[i]; 
        }
        if (scores[i] >= 900) {
            above900++;
        }
        if (scores[i] >= 600 && scores[i] <= 700) {
            between600to700++; 
        }
    }
    double averageScore = (double)totalScore / n;
    printf("%d\n", maxScore); 
    printf("%d\n", above900); 
    printf("%d\n", between600to700); 
    printf("%.1f\n", averageScore);
    return 0;
}
