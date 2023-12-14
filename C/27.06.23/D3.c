#include <stdio.h>

void juft_Toq(int n){
  for(int i = 2; i <= n; i+=2){
      printf(" %d",i);
   } printf("\n");
   for (int i = n % 2 ? n : n - 1; i >= 1; i -= 2){
     printf(" %d",i);
   }
}

int main(){
  int n;
  printf("n = "); scanf("%d", &n);
  
  juft_Toq(n);
  
  return 0;
}