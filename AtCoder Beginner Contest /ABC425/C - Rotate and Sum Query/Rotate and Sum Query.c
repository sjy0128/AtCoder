#include <stdio.h>
#define MAX 200000

int main(void) {
    int n, q, a[MAX], t, c, l, r, s=0;
    long long sa[MAX+1]={0,};
    scanf("%d %d", &n, &q);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) sa[i+1] = a[i] + sa[i];
    while(q--) {
        scanf("%d", &t);
        if(t == 1) {
            scanf("%d", &c);
            s = (s+c)%n;
        } else {
            scanf("%d %d", &l, &r);
            printf("%lld\n", (r+s <= n ? sa[r+s] : sa[n] + sa[(r+s)%n]) - (l+s-1 <= n ? sa[l+s-1] : sa[n] + sa[(l+s-1)%n]));
        }
    }
    return 0;
}