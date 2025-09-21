#include <stdio.h>

int main(void) {
    int n, m, k, a, b, arr[10][10], s;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) arr[i][j] = 0;
    }
    while(k--) {
        scanf("%d %d", &a, &b);
        arr[a-1][b-1] = 1;
        s = 0;
        for(int j=0; j<m; j++) s += arr[a-1][j];
        if(s == m) printf("%d ", a);
    }
    return 0;
}