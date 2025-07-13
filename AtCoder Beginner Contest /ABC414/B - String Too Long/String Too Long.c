#include <stdio.h>

int main() {
    int n, i, j;
    long long l[100], len=0;
    char c[100];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("\n%c %lld", &c[i], &l[i]);
        len += l[i];
        if(len > 100) {
            printf("Too Long");
            return 0;
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<l[i]; j++) printf("%c", c[i]);
    }
    return 0;
}