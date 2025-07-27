#include <stdio.h>

int main(void) {
    int i, j, a=1;
    char s[101], t[101];
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++) {
        if(s[i] == '#') {
            t[i] = '#';
            a = 1;
        } else {
            if(a) t[i] = 'o';
            else t[i] = '.';
            a = 0;
        }
    }
    printf("%s", t);
    return 0;
}