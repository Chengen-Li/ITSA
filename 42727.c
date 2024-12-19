#include <stdio.h>

int main() {
    int P; 
    scanf("%d", &P);
    double totalCost;
    if (P>=100) {
        totalCost=P*70; 
    } else if (P>=30) {
        totalCost=P*80;
    } else if (P>=10){
        totalCost=P*90; 
    } else {
        totalCost=P*100; 
    }
    printf("%.0f\n", totalCost);
    return 0;
}