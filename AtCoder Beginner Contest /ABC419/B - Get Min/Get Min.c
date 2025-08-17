#include <stdio.h>

int main(void) {
    int q, t, x, b[100]={0,};
    scanf("%d", &q);
    while(q--) {
        scanf("%d", &t);
        if(t == 1) {
            scanf("%d", &x);
            b[x-1]++;
        } else {
            for(int i=0; i<100; i++) {
                if(b[i]) {
                    b[i]--;
                    printf("%d\n", i+1);
                    break;
                }
            }
        }
    }
    return 0;
}