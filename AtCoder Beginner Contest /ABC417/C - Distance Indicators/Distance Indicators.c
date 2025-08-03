#include <stdio.h>

int main(void) {
    int n, i, a[200000], h[400000]={0,};
    long long c=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        h[i+a[i]]++;
    }
    for(i=0; i<n; i++) {
        if(a[i]<=i) c += h[i-a[i]];
    }
    printf("%lld", c);
    return 0;
}