#include <stdio.h>

int yigindi(int a, int b){
  return a + b;
}

int ayirma(int a, int b){
  return a - b;
}

int kopaytma(int a, int b){
  return a * b;
}

int bolinma(int a, int b){
  return a / b;
}



int main(){
  
  int a,b;
  printf("2ta son kiriting: "); scanf("%d %d", &a, &b);
  
  int sum = yigindi(a,b);
  printf("Yigindi: %d\n", sum);
  
  int sum1 = ayirma(a,b);
  printf("Ayirma: %d\n", sum1);
  
  int sum2 = kopaytma(a,b);
  printf("Kopaytma: %d\n", sum2);

  int sum3 = bolinma(a,b);
  printf("Bolinma: %d\n", sum3);
  
 return 0; 
}