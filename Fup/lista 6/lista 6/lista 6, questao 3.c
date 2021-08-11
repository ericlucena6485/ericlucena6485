#include <stdio.h>

  void main(){
     int vetor[15];
     int cont=0;
         printf("digite 15 valores: ");
     for(int i=0; i<=14; i++){

            scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
                cont=cont+1;
        }
     }
      printf("a quantidade de pares eh:%d", cont);

  }
