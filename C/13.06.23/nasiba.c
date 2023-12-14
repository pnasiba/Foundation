#include <stdio.h>

int main(){
  
  int a, b;
  
  char amal;
  printf("2 ta son kiriting: "); scanf("%d %d",&a, &b);
  printf("Amal kiriting: "); scanf(" %c",&amal);
  
  switch (amal){
  
  case '+':
    printf("%d + %d = %d", a, b, a+b);
    break;
  case '-':
    printf("%d - %d = %d", a, b, a-b);
    break;
  case '/':
    printf("%d / %d = %d", a, b, a/b);
    break;
  case '*':
    printf("%d * %d = %d", a, b, a*b);
    break;
  default:
    printf("Bunday oy yoq");
    break;
  }
  return 0;
}