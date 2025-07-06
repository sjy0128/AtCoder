#include <stdio.h>

int main(void) {
    int n, m, i, a, sum=0;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf(sum <= m ? "Yes" : "No");
    return 0;
}