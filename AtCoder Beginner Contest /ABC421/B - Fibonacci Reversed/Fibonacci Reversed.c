#include <stdio.h>

int main(void) {
    int x, y;
    long long a[10]={0,}, n;
    scanf("%d %d", &x, &y);
    a[0] = x, a[1] = y;
    for(int i=2; i<10; i++) {
        n = a[i-2] + a[i-1];
        while(n) {
            a[i] = a[i] * 10 + n % 10;
            n /= 10;
        }
    }
    printf("%lld", a[9]);
    return 0;
}