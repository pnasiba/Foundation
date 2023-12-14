#include <stdio.h>

int main() {
  int n;
  printf("N son kiriting: "); scanf("%d", &n);
  int k = 1;
  while (k * k <= n) {
    k++;
  }
  printf("%d\n", k);
  return 0;
}