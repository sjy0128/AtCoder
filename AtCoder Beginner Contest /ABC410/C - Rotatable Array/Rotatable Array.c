#include <stdio.h>

int main() {
    int n, q, i, j, k, a[1000000], t, p, x, s=0;
    scanf("%d %d", &n, &q);
    for(i=0; i<n; a[i]=i+1, i++);
    for(i=0; i<q; i++) {
        scanf("%d", &t);
        switch(t) {
            case 1:
                scanf("%d %d", &p, &x);
                a[(p-1+s)%n] = x;
                break;
            case 2:
                scanf("%d", &p);
                printf("%d\n", a[(p-1+s)%n]);
                break;
            case 3:
                scanf("%d", &x);
                x %= n;
                s += x;
                s %= n;
                break;
        }
    }
    return 0;
}