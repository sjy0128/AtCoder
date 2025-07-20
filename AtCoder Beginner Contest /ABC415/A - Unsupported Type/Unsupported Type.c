#include <stdio.h>

int main() {
    int n, i, a[100], x;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i=0; i<n; i++) {
        if(a[i] == x) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}