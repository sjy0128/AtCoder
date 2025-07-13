#include <stdio.h>

int main() {
    int n, l, r, i, x, y, c=0;
    scanf("%d %d %d", &n, &l, &r);
    for(i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        if(x <= l && y >= r) c++;
    }
    printf("%d", c);
    return 0;
}