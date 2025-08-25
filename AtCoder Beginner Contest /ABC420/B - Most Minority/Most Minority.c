#include <stdio.h>

int main(void) {
    int n, m, r[100]={0,}, x, y, max=0;
    char s[99][101];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
        scanf("%s", s[i]);
    }
    for(int i=0; i<m; i++) {
        x = y = 0;
        for(int j=0; j<n; j++) {
            if(s[j][i] == '1') y++;
            else x++;
        }
        if(x < y){
            for(int j=0; j<n; j++) {
                if(s[j][i] == '0') r[j]++;
            }
        } else {
            for(int j=0; j<n; j++) {
                if(s[j][i] == '1') r[j]++;
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(r[i] > max) max = r[i];
    }
    for(int i=0; i<n; i++) {
        if(r[i] == max) printf("%d ", i+1);
    }
    return 0;
}