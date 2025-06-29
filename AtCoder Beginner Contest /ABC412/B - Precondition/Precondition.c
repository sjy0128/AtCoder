#include <stdio.h>

int main(void) {
    int i, j, temp;
    char s[101], t[101];
    scanf("%s\n%s", s, t);
    for(i=1; s[i]!='\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            temp = 0;
            for(j=0; t[j]!='\0'; j++) {
                if(t[j] == s[i-1]) {
                    temp = 1;
                    break;
                }
            }
            if(!temp) {
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}