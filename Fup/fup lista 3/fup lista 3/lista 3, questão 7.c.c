#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
    int a, b , c;
    int x1,x2;
    int delta;
     printf("digite um numero: ");
     scanf("%d", &a);


     printf("digite um numero: ");
     scanf("%d", &b);

     printf("digite um numero: ");
     scanf("%d", &c);

     delta= (b*b)-(4*a*c);
     x1=((-1*b)+sqrt(delta))/2*a;
     x2=((-1*b)-sqrt(delta))/2*a;

 if(delta>0){

      printf("tem duas raizes %d  %d", x1, x2);
 }
 else if(delta==0){

   printf("tem uma raiz real");
 }
  else{
    printf("nao tem raiz real");
  }
  return 0;
 }

