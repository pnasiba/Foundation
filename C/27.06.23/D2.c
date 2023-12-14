#include <stdio.h>
#include <math.h>

float Pow(float a, int n){
  float total = 1;
  while (n > 0){
    total *= a;
    n--;
  }
  return total;
}


int main(){
  
  int n;
  float a;
  
  printf("Haqiqiy va butun son kiriting: "); scanf("%f %d", &a, &n);
  
  float result = Pow(a,n);
  printf("natija: %f\n", result);
  
  return 0;
}