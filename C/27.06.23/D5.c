#include <stdio.h>

int is_uppercase(char c){
  if(c >= 'a' && c <= 'z'){
    return 1;
  }
 else{
    return 0;
  }
}

int main(){
  char c;
  printf("Enter a character: "); scanf("%c", &c);

  printf("%d\n", is_uppercase(c));
  return 0;
}