#include <stdio.h>

void sort(int *a, int *b, int s, int e);

int main(void) {
    int n, q, i, a[300000], t[300000], b, s, e, p;
    long long suma[300000], sum;
    scanf("%d %d", &n, &q);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    sort(a, t, 0, n-1);
    suma[0] = a[0];
    for(i=1; i<n; i++) suma[i] = suma[i-1] + a[i];
    while(q--) {
        scanf("%d", &b);
        if(b > a[n-1]) printf("-1\n");
        else {
            if(b-1 <= a[0]) p = -1;
            else {
                s = 0;
                e = n-1;
                while(1) {
                    p = (s+e)/2;
                    if(p+1>=n) {
                        p = n-1;
                        break;
                    }
                    if(a[p] <= b-1 && a[p+1] > b-1) break;
                    if(a[p] <= b-1) s = p+1;
                    else e = p-1;
                }
            }
            sum = (p>=0 ? suma[p] : 0) + (long long)(n-p-1) * (b-1) + 1;
            printf("%lld\n", sum);
        }
    }
    return 0;
}

void sort(int *a, int *b, int s, int e) {
    if(s >= e) return;
    int m=(s+e)/2;
    int i=s, j=m+1, k=s;
    sort(a, b, s, m);
    sort(a, b, m+1, e);
    while(i <= m && j <= e) {
        if(a[i] < a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i <= m) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = b[i];
}