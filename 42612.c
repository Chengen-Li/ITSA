#include <stdio.h>

int main() {
    int totalSeconds;
    scanf("%d", &totalSeconds);
    int days = totalSeconds / 86400;
    totalSeconds %= 86400;
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;
    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);
    return 0;
}