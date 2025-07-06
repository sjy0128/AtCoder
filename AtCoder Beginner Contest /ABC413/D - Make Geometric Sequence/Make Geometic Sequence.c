#include <stdio.h>

void sort(int *a, int *b, int s, int e);
int gcd(int a, int b), abs(int a);

int main(void) {
    int t, i, j, n, a[200000], b[200000], m[100001], mc, pc, mi, pi, dn, nr, dnrgcd, tm;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0; j<n; j++) scanf("%d", &a[j]);
        sort(a, b, 0, n-1);
        if(a[0] < 0 && a[n-1] > 0) {
            for(j=0; j<n/2+1 && a[j]<0; j++) m[j] = -a[j];
            mc = j;
            pc = n-j;
            if(abs(mc - pc) > 1) {
                printf("No\n");
                continue;
            }
            mi = mc-1;
            pi = mc;
            if(mc > pc || (mc == pc && m[mc-1] < a[mc])) {
                for(j=0; j<n; j++) {
                    if(j % 2 == 0) a[j] = m[mi--];
                    else a[j] = a[pi++];
                }
            } else {
                for(j=0; j<n; j++) {
                    if(j % 2 == 1) a[j] = m[mi--];
                    else a[j] = a[pi++];
                }
            }
        }
        dnrgcd = gcd(abs(a[0]), abs(a[1]));
        nr = a[0] / dnrgcd;
        dn = a[1] / dnrgcd;
        tm = 1;
        for(j=2; j<n; j++) {
            if((long long)dn * a[j-1] != (long long)nr * a[j]) {
                tm = 0;
                break;
            }
        }
        printf(tm ? "Yes\n" : "No\n");
    }
    return 0;
}

void sort(int *a, int *b, int s, int e) {
    if(s >= e) return 0;
    int mid=(s+e)/2;
    int i=s, j=mid+1, k=s;
    sort(a, b, s, mid);
    sort(a, b, mid+1, e);
    while(i <= mid && j <= e) {
        if(a[i] < a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while(i <= mid) b[k++] = a[i++];
    while(j <= e) b[k++] = a[j++];
    for(i=s; i<=e; i++) a[i] = b[i];
}

int gcd(int a, int b) {
    if(b <= 0) return a;
    return gcd(b, a % b);
}

int abs(int a) {
    return a < 0 ? -a : a;
}