#include <stdio.h>

int main(void) {
    int l;
    char s[10];
    scanf("%s", s);
    for(l=0; s[l]!='\0'; l++);
    for(int i=0; i<l; i++) {
        if(i == (l+1)/2-1) continue;
        printf("%c", s[i]);
    }
    return 0;
}