#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for(n; n>=0; printf("%d\n", n--));
  return 0;
}