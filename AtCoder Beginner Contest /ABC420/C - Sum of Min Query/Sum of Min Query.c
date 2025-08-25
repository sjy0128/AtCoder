#include <stdio.h>

int main(void) {
    int n, q, a[200000], b[200000], m[200000], x, v;
    long long s=0, t;
    char c;
    scanf("%d %d", &n, &q);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) scanf("%d", &b[i]);
    for(int i=0; i<n; i++) {
        m[i] = a[i]<b[i]?a[i]:b[i];
        s += m[i];
    }
    while(q--) {
        scanf(" %c %d %d", &c, &x, &v);
        if(c == 'A') a[x-1] = v;
        else b[x-1] = v;
        s -= m[x-1];
        m[x-1] = a[x-1]<b[x-1]?a[x-1]:b[x-1];
        s += m[x-1];
        printf("%lld\n", s);
    }
    return 0;
}