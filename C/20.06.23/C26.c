#include <stdio.h>

int main(){
  
  int n;
  int count = 0;
  
  printf("Son kiriting: "); scanf("%d", &n);
  for (int i = 1; i <= n;){
    if (n % i == 0){
      count++;
    }
    i++;
  }
  if (count == 2){
    printf("Tub son ");
  } else {
    printf("Tub son emas");
  }
  
  return 0;
}