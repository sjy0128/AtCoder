#include <stdio.h>

int main(void) {
    int n, i, a, b, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(b > a) count++;
    }
    printf("%d", count);
    return 0;
}