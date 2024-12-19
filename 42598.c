#include <stdio.h>
#include <stdlib.h> 

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int num[3];
    for (int i=0;i<3;i++) {
        scanf("%d",&num[i]);
    }
    //qsort¶i¦æ±Æ§Ç
    qsort(num, 3, sizeof(int), compare);
    printf("%d\n", num[2]);
    return 0;
}
