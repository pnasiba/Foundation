#include <stdio.h>

int main(){

  int a, b;
  printf("Enter the number a and b: "); scanf("%d %d", &a, &b);
  printf("First 3 even numbers from a to b:\n");
  //  a har doim b dan kichik kiritilsin.
  
  int count = 0;
  for (int i = b; i >= a && count < 3; i--){
    if (i % 2 != 0){
      printf("%d ", i);
      count++;
    }
  }
  
  printf("\n");
  return 0;
}