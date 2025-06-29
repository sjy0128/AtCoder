#include <stdio.h>
#include <stdlib.h>

void sort(int *a, int s, int e), swap(int *a, int *b);

int main(void) {
    int t, n, i, j, k, count;
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        int *a = (int *)malloc(sizeof(int)*n);
        for(j=0; j<n; j++) {
            scanf("%d", &a[j]);
        }
        sort(a, 1, n-2);
        count = 1;
        for(j=0; j<n-1; j+=0) {
            count++;
            if(a[n-1]<=a[j]*2) {
                break;
            }
            if(a[j+1] > a[j]*2) {
                count = -1;
                break;
            }
            for(k=j+1; a[k]<=a[j]*2 && k<n; k++);
            j=k-1;
        }
        printf("%d\n", count);
        free(a);
    }
    return 0;
}

void sort(int *a, int s, int e) {
    int i=s, j;
    if(s >= e) return;
    for(j=s; j<=e; j++) {
        if(a[j] < a[e]) {
            swap(&a[i++], &a[j]);
        }
    }
    swap(&a[i], &a[e]);
    sort(a, s, i-1);
    sort(a, i+1, e);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}