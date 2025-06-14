#include <stdio.h>

int main() {
    int n, a[100], i, x=0, count;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > x) x = a[i];
    }
    for(x=x>100?100:x; x>0; x--) {
        count = 0;
        for(i=0; i<n; i++) {
            if(a[i] >= x) count++;
        }
        if(count >= x) {
            printf("%d", x);
            return 0;
        }
    }
    printf("0");
    return 0;
}