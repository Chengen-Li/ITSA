#include <stdio.h>
#include <stdlib.h> 

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), compare);
    printf("%d\n", nums[n - 1]);
    return 0;
}