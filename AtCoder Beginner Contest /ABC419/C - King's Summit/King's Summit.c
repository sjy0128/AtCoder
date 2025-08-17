#include <stdio.h>
#define MAX 1000000000

int main(void) {
    int n, r, c, rmin=MAX, rmax=1, cmin=MAX, cmax=1, ra, ca;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &r, &c);
        if(r > rmax) rmax = r;
        if(r < rmin) rmin = r;
        if(c > cmax) cmax = c;
        if(c < cmin) cmin = c;
    }
    ra = (rmax-rmin+1)/2;
    ca = (cmax-cmin+1)/2;
    printf("%d", ra > ca ? ra : ca);
    return 0;
}