#include <stdio.h>

   void main(){
      int vetor[15];
      int x, y,i, soma;


      for(i=0; i<15; i++){
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
      }

      printf("digite duas posicoes no vetor: ");
      scanf("%d %d",&x,&y);


      soma=vetor[x]+vetor[y];
      printf("a soma foi: %d",soma);


   }
