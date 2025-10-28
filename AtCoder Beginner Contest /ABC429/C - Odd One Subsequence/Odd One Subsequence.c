#include <stdio.h>

int main(void) {
    int n, t, a[200000]={0,};
    long long r=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &t);
        a[t-1]++;
    }
    for(int i=0; i<n; i++) r += (long long)a[i]*(a[i]-1)/2*(n-a[i]);
    printf("%lld", r);
    return 0;
}