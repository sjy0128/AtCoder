#include <stdio.h>

int main(void) {
    int n, x, i, a=1;
    char s[100][11], y[11];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%s", s[i]);
    scanf("%d %s", &x, y);
    for(i=0; s[x-1][i]!='\0' && y[i]!='\0'; i++) {
        if(s[x-1][i] != y[i]) {
            a = 0;
            break;
        }
    }
    if(s[x-1][i] != '\0' || y[i] != '\0') a = 0;
    printf(a ? "Yes" : "No");
    return 0;
}