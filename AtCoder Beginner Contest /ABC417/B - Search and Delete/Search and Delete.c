#include <stdio.h>

int main(void) {
    int n, m, i, j, a[100], b;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<m; i++) {
        scanf("%d", &b);
        for(j=0; j<n; j++) {
            if(a[j] == b) {
                a[j] = -1;
                break;
            }
        }
    }
    for(i=0; i<n; i++) {
        if(a[i] != -1) printf("%d ", a[i]);
    }
    return 0;
}