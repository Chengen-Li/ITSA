#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf(" %c", &ch); 
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("����\n");
    } else {
        printf("�l��\n");
    }
    return 0;
}