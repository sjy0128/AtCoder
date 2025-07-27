#include <stdio.h>

int main(void) {
    int n, l, r, i, t=1;
    char s[101];
    scanf("%d %d %d\n%s", &n, &l, &r, s);
    for(i=l-1; i<r; i++) {
        if(s[i] == 'x') {
            t = 0;
            break;
        }
    }
    printf(t ? "Yes" : "No");
    return 0;
}