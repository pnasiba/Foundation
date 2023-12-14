#include <stdio.h>

void print_numbers(int A, int B){
  if (A < B){
    for (int i = A; i <= B; i++){
      printf("%d ", B - i + A);
    }
  }
  else if(A > B){
    for (int i = A; i >= B; i--){
      printf("%d ", i);
    }
  }
  else{
    printf("%d ", A);
  }
}

int main(){
  int A, B;
  
  printf("Enter two numbers: "); scanf("%d %d", &A, &B);
  
  print_numbers(A, B);
  printf("\n");
  
  
  return 0;
}