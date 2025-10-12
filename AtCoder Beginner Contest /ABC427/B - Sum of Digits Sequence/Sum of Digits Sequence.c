#include <stdio.h>

int dp[101];

int f(int x);

int main(void) {
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", dp[n]);
    return 0;
}

int f(int x) {
    if(dp[x]) return dp[x];
    if(x <= 1) {
        dp[x] = 1;
        return 1;
    }
    int t, s=0;
    for(int i=0; i<x; i++) {
        t = f(i);
        for(; t; t/=10) s += t%10;
    }
    dp[x] = s;
    return s;
}