#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, l, r, min;
    scanf("%d %d", &n, &m);
    int *a = (int *)calloc(n+1, sizeof(int));
    for(i=0; i<m; i++) {
        scanf("%d %d", &l, &r);
        a[l-1]++;
        a[r]--;
    }
    min = a[0];
    for(i=1; i<n; i++) {
        a[i] += a[i-1];
        if(a[i] < min) min = a[i];
    }
    free(a);
    printf("%d", min);
    return 0;
}