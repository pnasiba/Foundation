#include <stdio.h>

int main(){
  
int n;
printf("n = "); scanf("%d", &n);

switch (n) {
  case 1:
    printf("Dushanba");
    break;
  case 2:
      printf("Seshanba");
      break;
  case 3:
      printf("Chorshanba");
      break;
  case 4:
     printf("Payshanba");
     break;
  case 5:
     printf("Juma");
     break;
  case 6:
     printf("Shanba");
     break;
  case 7:
     printf("Yakshanba");
     break;
  default:
       printf("Bunday kun yo'q");
}
  return 0;
}