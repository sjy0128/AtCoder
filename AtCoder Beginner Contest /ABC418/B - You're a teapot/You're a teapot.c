#include <stdio.h>

int main(void) {
    int a=0, b=0, t[100]={0,}, l=0;
    double temp, m=0;
    char s[101];
    scanf("%s", s);
    for(int i=0; s[i]!='\0'; i++) {
        if(s[i] == 't') t[l++] = i;
    }
    for(int i=0; i<l-1; i++) {
        for(int j=i+1; j<l; j++) {
            if(t[j]-t[i] >= 2) {
                temp = (double)(j-i-1) / (t[j]-t[i]-1);
                if(temp > m) m = temp;
            }
        }
    }
    printf("%.17lf", m);
    return 0;
}