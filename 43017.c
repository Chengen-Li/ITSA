#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], store[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    store[0] = arr[0]; 
    for (int i = 1; i < n; i++) {
        store[i] = store[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" "); 
        }
        printf("%d", store[i]);
    }
    printf("\n");
    return 0;
}