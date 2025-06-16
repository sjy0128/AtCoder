#include <stdio.h>

int main() {
    int n, i, a[100], k, count=0;
    scanf("%d", &n);
    for(i=0; i<n; scanf("%d", &a[i++]));
    scanf("%d", &k);
    for(i=0; i<n; count += a[i++] >= k ? 1 : 0);
    printf("%d", count);
    return 0;
}