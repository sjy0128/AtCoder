#include <stdio.h>

int main(void) {
    int n, a=0;
    char s[21];
    scanf("%d\n%s", &n, s);
    if(n >= 3) {
        if(s[n-3]=='t' && s[n-2]=='e' && s[n-1]=='a') a = 1;
    }
    printf(a ? "Yes" : "No");
    return 0;
}