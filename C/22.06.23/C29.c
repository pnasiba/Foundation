#include <stdio.h>

int main() {
  int n, i = 0;
  
  printf("Enter the number: ");
  scanf("%d", &n);
  
  while (i <= n){
    if (i == n){
      printf("%d is divisible by 4\n", n);
      break;
      i += 4;
    }
  else
{
      printf("%d is not divisible by 4\n", n);   
    }
  }
  return 0;
}
