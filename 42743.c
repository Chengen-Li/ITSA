#include <stdio.h>

int main() {
    int edge1, edge2, edge3;
    scanf("%d %d %d", &edge1, &edge2, &edge3); 
    if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1) {
        printf("fit\n");
    } else {
        printf("unfit\n"); 
    }
    return 0;
}