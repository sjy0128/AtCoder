#include <stdio.h>

int main(void){
    int n, m, i, j, a[100], temp;
    scanf("%d", &n);
    for(i=0; i<n; scanf("%d", &a[i++]));
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0, m=0; i<n; i++) {
        if(i == 0 || a[i] != a[i-1]) {
            a[m++] = a[i];
        }
    }
    printf("%d\n", m);
    for(i=0; i<m; printf("%d ", a[i++]));
    return 0;
}