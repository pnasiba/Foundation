#include <stdio.h>

int main(){
  
  int a, b ,i = 0;
  printf("Enter the number a and b: "); scanf("%d %d", &a, &b);
  printf("First 3 even numbers from a to b:\n");
//  a har doim b dan kichik kiritilsin.
  for (int j = a; j <= b && i < 3; j++){
    if (j % 2 == 0){
      printf("%d ", j);
      i++;
    }
  }
  return 0;
}