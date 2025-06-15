#include <stdio.h>

int main(void){
    int n, s, i, t1, t2=0;
    scanf("%d %d", &n, &s);
    for(i=0; i<n; i++) {
        scanf("%d", &t1);
        if(t1 - t2 > s) {
            printf("No");
            return 0;
        }
        t2 = t1;
    }
    printf("Yes");
    return 0;
}