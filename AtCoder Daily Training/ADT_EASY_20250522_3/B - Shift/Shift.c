#include <stdio.h>

int main() {
    int n, k, i, a;
    scanf("%d %d", &n, &k);
    for(i=0; i<k; i++) scanf("%d", &a);
    for(i=0; i<n-k; i++) {
        scanf("%d", &a);
        printf("%d ", a);
    }
    for(i=0; i<(k>n?n:k); i++) printf("0 ");
    return 0;
}