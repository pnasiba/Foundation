#include <stdio.h>
 
int main (){
  
  int num1 , num2 , sum;
  char belgi;
  
  num1 = 30;
  num2 = 20;
  
  printf("Amal kiriting: ");
  scanf("%c", &belgi);
  
  if (belgi == '+') {
    printf("%d", sum = num1 + num2);
  } else if (belgi == '-') {
    printf("%d", sum = num1 - num2);
  } else if (belgi == '*') {
    printf("%d", sum = num1 * num2);
  } else if (belgi == '/') {
    printf("%d", sum = num1 / num2);
  } else if (belgi == '%') {
    printf("%d", sum = num1 % num2);
  } else printf("Bu amal noto'g'ri");
  
  
  
  return 0;
}