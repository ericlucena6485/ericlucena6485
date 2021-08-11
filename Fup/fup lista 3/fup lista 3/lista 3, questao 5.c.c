#include <stdio.h>
#include <stdlib.h>

  void main(){
   int a,b,c;

   printf("digite um numero: ");
   scanf("%d", &a);

   printf("digite um numero: ");
   scanf("%d", &b);

   printf("digite um numero: ");
   scanf("%d", &c);

   if(a<= b && a<=c){
      if(b <= c){
        printf(" %d %d %d", a,b,c);
      }
      else{
        printf("%d %d %d", a,c,b);
      }
   }
   else if(b<= a && b<=c){
        if(a <=c){
                printf(" %d %d %d", b,a,c);
        }
        else{
            printf("%d %d %d", b,c,a);
        }
   }
   else{
    if(a<= b){
        printf("%d %d %d", c,a,b);
    }
   else{
    printf("%d %d %d", c,b,a);
    }
   }
  }
