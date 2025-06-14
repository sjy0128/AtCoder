#include <stdio.h>

int main() {
    int n, i;
    char t[101], a[101];
    scanf("%d\n%s\n%s", &n, t, a);
    for(i=0; i<n; i++) {
        if(t[i] == 'o' && a[i] == 'o') {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}