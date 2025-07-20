#include <stdio.h>

int main() {
    int i, t=0;
    char s[1001];
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++) {
        if(s[i] == '#') {
            if(t == 0) {
                printf("%d,", i+1);
                t = 1;
            } else {
                printf("%d\n", i+1);
                t = 0;
            }
        }
    }
    return 0;
}