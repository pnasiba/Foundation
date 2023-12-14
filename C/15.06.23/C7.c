#include <stdio.h>

int main (){
  
int i = 15;
 
 while (i <= 22){
   if (i % 2 == 0 ){
     printf("%d\n",-i);
     } else {
       printf("%d\n", i);
     }
     i++;
 }
 
  return 0;
}