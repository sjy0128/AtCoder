#include <stdio.h>

int main(void) {
    char s[11];
    scanf("%s", s);
    if(s[0]=='r' && s[1]=='e' && s[2]=='d' && s[3]=='\0') printf("SSS");
    else if(s[0]=='b' && s[1]=='l' && s[2]=='u' && s[3]=='e' && s[4]=='\0') printf("FFF");
    else if(s[0]=='g' && s[1]=='r' && s[2]=='e' && s[3]=='e' && s[4]=='n' && s[5]=='\0') printf("MMM");
    else printf("Unknown");
    return 0;
}