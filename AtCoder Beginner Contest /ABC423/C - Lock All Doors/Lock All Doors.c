#include <stdio.h>

int main(void) {
    int n, l[200000], r, s=-1, e, c=0;
    scanf("%d %d", &n, &r);
    for(int i=0; i<n; i++) {
        scanf("%d", &l[i]);
        if(s == -1 && !l[i]) s=i;
        if(!l[i]) e=i;
    }
    if(s > r) s = r;
    if(e < r) e = r-1;
    if(s == -1) {
        printf("0");
        return 0;
    }
    for(int i=s; i<=e; i++) {
        c += 1 + l[i];
    }
    printf("%d", c);
    return 0;
}