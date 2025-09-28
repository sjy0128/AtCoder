#include <stdio.h>

int main(void) {
    int n, s=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        s += i % 2 ? -i*i*i : i*i*i;
    }
    printf("%d", s);
    return 0;
}