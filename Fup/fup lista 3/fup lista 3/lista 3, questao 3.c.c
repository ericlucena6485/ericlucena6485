#include <stdio.h>
#include <stdlib.h>

  int main(){
    int numero, soma=0;


    for(int i=1; i<=4; i++){
     printf("digite um numero: ");
     scanf("%d", &numero);

if(numero%2==0){
  soma=soma+numero;
}


 }

printf("a soma dos numeros pares foi:%d ",soma);
  return 0;

  }
