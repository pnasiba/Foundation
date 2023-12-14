#include <stdio.h>

int main (){
  
  int num;
  
  printf("Son kiriting: "); scanf("%d", &num);
  
  if (num < 0){
    num = num * -1;
  }
  
  printf("%d\n", num);
  
  return 0;
}