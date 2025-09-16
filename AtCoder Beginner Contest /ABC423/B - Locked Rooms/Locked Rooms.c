#include <stdio.h>

int main(void) {
    int n, l[100], c=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &l[i]);
    for(int i=0; i<n && l[i]!=1; i++) c++;
    for(int i=n-1; i>=0 && l[i]!=1; i--) c++;
    printf("%d", (n-1-c) > 0 ? n-1-c : 0);
    return 0;
}