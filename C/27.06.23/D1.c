#include <stdio.h>

void reverse_order(int n){
  for (int i = n; i >= 1; i--){
    printf("%d\n",i);
  }
}


    
int main(){
  
  int n;
  printf("N = "); scanf("%d",&n);
  
  reverse_order(n);
  
  return 0;
}