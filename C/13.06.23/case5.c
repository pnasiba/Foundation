#include <stdio.h>

int main(){
  
  int a , b;
  char n;
  
  printf("Son kiriting: "); scanf("%d %d", &a, &b);
  printf("Amalni tanlang: "); scanf(" %c", &n);
    
    switch (n) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '/':
            printf("%d / %d = %d", a, b, a / b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        default:
            printf("Noto'g'ri amal tanlandi.");
        }
  // Ustoz faqat nolga bo'linishida xatoli bovoti to'gillomadim.
  return 0;
}