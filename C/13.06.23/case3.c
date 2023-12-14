#include <stdio.h>

int main(){
  
  int n;
  printf("Oyni kiriting: "); scanf("%d", &n);
  
  switch (n) {
  case 12: case 1: case 2:
    printf("Qish");
    break;
  case 3 ... 5:
    printf("Bahor");
    break;
  case 6 ... 8:
    printf("Yoz");
    break;
  case 9 ... 11:
    printf("Kuz");
    break;
  default:
    printf("Bunday oy yo'q");
    break;
  }
  return 0;
}