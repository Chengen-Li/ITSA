#include <stdio.h>
#include <math.h>

int main() {
    int distance;
    scanf("%d", &distance);
    double me = 1.0; // 每秒 1 公尺
    double friend = 30.0 * 2.54 / 100; // 每秒社友的速度（公尺）
    double timeNeeded = distance / (me - friend);
    int result = (int)ceil(timeNeeded);
    printf("%d\n", result);
    return 0;
}