#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
     int contador;
     int x;

     printf("digite um numero: ");
     scanf("%d", &x);

 if(x%3==0 && x%5 !=0){
     printf("eh divisivel por 3");

 }
 if(x%5==0 && x%3 !=0){
    printf("divisivel por 5");
 }





 system("pause");
 return 0;

  }
