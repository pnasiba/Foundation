#include <stdio.h>

int main(){
  
  int a, b;
  int count = 0;
  printf("a son kiriting: "); scanf("%d", &a);
  printf("b son kiriting: "); scanf("%d", &b);
  
  
  while (a >= b) {
    a -= b;
    count++;
  }
  printf("%d %d",count, a);
  
  
  
  return 0;
}