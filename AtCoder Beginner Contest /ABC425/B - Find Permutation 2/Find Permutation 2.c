#include <stdio.h>

int main(void) {
    int n, a[10], b[10]={0,};
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] != -1) {
            b[a[i]-1]++;
            if(b[a[i]-1] >= 2) {
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes\n");
    for(int i=0, j=0; i<n; i++) {
        while(b[j]) j++;
        printf("%d ", a[i] == -1 ? j+++1 : a[i]);
    }
    return 0;
}