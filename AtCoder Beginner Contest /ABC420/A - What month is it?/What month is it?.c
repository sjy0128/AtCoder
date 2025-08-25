#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (x+y-1)%12+1);
    return 0;
}