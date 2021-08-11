#include <stdio.h>
#include <stdlib.h>

  int main(){
    int a,b,c;

    printf("digite um numero: ");
    scanf("%d",&a);

    printf("digite um numero: ");
    scanf("%d",&b);

    printf("digite um numero: ");
    scanf("%d",&c);

    if((a+b>c)&& (b+c>a)&& (c+a>b)){
        printf("sao lados de um triangulo");
    }
    else{
        printf("n sao lados de um triangulo");
    }


    return 0;
  }

