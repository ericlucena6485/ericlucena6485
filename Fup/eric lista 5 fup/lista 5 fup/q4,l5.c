#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,x,y,menor,maior,mult1,mult2;
    n1=1;
    n2=2;

      printf("digite dois numero: \n");
      scanf("%d %d",&x,&y);

    if(x>y){
        maior = x;
        menor = y;
    }
     else{
        menor = x;
        maior = y;
     }
    mult1=menor;
    mult2=maior;
    while(mult1!=mult2){
        mult1=menor*n1;

          while(mult1>mult2){
            mult2=maior*n2;
          }
    n1++;

    }
        printf("o mmc eh igual a %d", mult1);

       return 0;

}

