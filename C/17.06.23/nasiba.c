#include <stdio.h>

int main(){
  
  int i = 25;
  
  do {
    if(i % 5 == 0 && i % 9 == 0){
      printf("%d\n", i);
    }
    i++;
  } while(i <= 690);
  
return 0;
}