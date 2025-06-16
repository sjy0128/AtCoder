#include <stdio.h>

int main() {
    int n, q, i, j, a[100]={0,}, x, min=0;
    scanf("%d %d", &n, &q);
    for(i=0; i<q; i++) {
        scanf("%d", &x);
        if(x == 0) {
            min = q;
            for(j=0; j<n; j++) {
                if(a[j] < min) min = a[j];
            }
            for(j=0; j<n; j++) {
                if(a[j] == min) {
                    a[j]++;
                    break;
                }
            }
        } else a[x-1]++;
        printf("%d ", x==0 ? j+1 : x);
    }
    return 0;
}