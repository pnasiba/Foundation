#include <stdio.h>

int main(){
  
  int n;
  
  printf("n = "); scanf("%d", &n);
  
  if (n > 0) {
    printf("Son musbat");
  } else if (n < 0) {
    printf("Son manfiy"); 
  } else {
    printf("nol");
  }
  
  return 0;
}