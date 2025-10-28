#include <stdio.h>

int main(void) {
    int n, m, a[100], s=0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    for(int i=0; i<n; i++) {
        if(s - a[i] == m) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}