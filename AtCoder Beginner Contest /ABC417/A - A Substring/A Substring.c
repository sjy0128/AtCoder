#include <stdio.h>

int main(void) {
    int n, a, b, i;
    char s[21];
    scanf("%d %d %d\n%s", &n, &a, &b, s);
    for(i=a; i<n-b; i++) {
        printf("%c", s[i]);
    }
    return 0;
}