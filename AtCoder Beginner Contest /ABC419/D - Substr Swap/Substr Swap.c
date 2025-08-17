#include <stdio.h>

int main(void) {
    int n, m, l, r, a[500001]={0,};
    char s[500000], t[500000];
    scanf("%d %d\n%s %s", &n, &m, s, t);
    while(m--) {
        scanf("%d %d", &l, &r);
        a[l-1]++;
        a[r]++;
    }
    for(int i=0; i<n; i++) {
        a[i+1] += a[i];
        printf("%c", a[i]%2==0 ? s[i] : t[i]);
    }
    return 0;
}