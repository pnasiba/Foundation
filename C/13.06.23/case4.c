#include <stdio.h>

int main(){
  
  int n;
  
  printf("Raqam tanlang: "); scanf("%d", &n);
  
  switch (n) {
      case 1:
        printf("Yanvar 31 kun");
        break;
      case 2:
        printf("Fevral 31 kun");
        break;
      case 3:
        printf("Mart 31 kun");
        break;
      case 4:
        printf("Aprel 30 kun");
        break;
      case 5:
        printf("May 31 kun");
        break;
      case 6:
        printf("Iyun 30 kun");
        break;
      case 7:
        printf("Iyul 31 kun");
        break;
      case 8:
        printf("Avgust 31 kun");
        break;
      case 9:
        printf("Sentabr 30 kun");
        break;
      case 10:
        printf("Oktabr 31 kun");
        break;
      case 11:
        printf("Noyabr 30 kun");
        break;
      case 12:
        printf("Dekabr 31 kun");
        break;
      default:
        printf("Bunday oy yo'q");
        break;
  }
  
  return 0;
}