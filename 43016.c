#include <stdio.h>
#include <math.h> 
int main() {
    int arr[6]; 
    long long sum = 0; 
    for (int i=0;i<6;i++) {
        scanf("%d", &arr[i]);
        sum += (long long)pow(arr[i], 2); 
    }

    printf("%lld\n", sum); 
    return 0;
}