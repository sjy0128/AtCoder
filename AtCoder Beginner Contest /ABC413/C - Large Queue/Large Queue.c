#include <stdio.h>

int main(void) {
    int q, i, j, t, c, x, k, s=0, e=0, a[200000][2], cs;
    long long vs;
    scanf("%d", &q);
    for(i=0; i<q; i++) {
        scanf("%d", &t);
        if(t == 1) {
            scanf("%d %d", &c, &x);
            a[e][1] = c;
            a[e][0] = x;
            e++;
        } else {
            scanf("%d", &k);
            cs = 0;
            vs = 0;
            while(cs != k) {
                if(a[s][1] > k - cs) {
                    vs += (long long)a[s][0] * (k - cs);
                    a[s][1] -= k - cs;
                    cs += k - cs;
                } else {
                    cs += a[s][1];
                    vs += (long long)a[s][0] * a[s][1];
                    s++;
                }
            }
            printf("%lld\n", vs);
        }
    }
    return 0;
}