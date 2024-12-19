#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 讀取陣列大小

    int arr[n]; // 宣告陣列
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // 讀取每個元素
    }

    // 反轉並輸出陣列
    for (int i = n - 1; i >= 0; i--) {
        if (i != n - 1) {
            printf(" "); // 加空格分隔
        }
        printf("%d", arr[i]);
    }
    printf("\n"); // 換行

    return 0;
}
