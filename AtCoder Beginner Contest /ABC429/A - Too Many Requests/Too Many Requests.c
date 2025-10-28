#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++) {
        printf(i <= m ? "OK\n" : "Too Many Requests\n");
    }
    return 0;
}