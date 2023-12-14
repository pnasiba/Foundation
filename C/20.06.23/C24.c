#include <stdio.h>

int main(){
  
  int n;
  printf("Son kiriting: "); scanf("%d", &n);
  
  for (int i = n; i <= 2*n; i++){
    printf("%d ", i);
  }
  
  return 0;
}