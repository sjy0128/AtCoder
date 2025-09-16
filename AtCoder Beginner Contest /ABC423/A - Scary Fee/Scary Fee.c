#include <stdio.h>

int main(void) {
    int x, c, a=0;
    scanf("%d %d", &x, &c);
    while(a*1000+a*c <= x) a++;
    printf("%d", (a-1)*1000);
    return 0;
}