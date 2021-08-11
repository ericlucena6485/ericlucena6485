#include<stdio.h>

  void main(){
     float vetor[10];
     int soma=0;
     int i;
     float media;

       for( i=0; i<10; i++){
         printf("digite a sua nota: ");
         scanf("%f", &vetor[i]);
         media=media+vetor[i];
    }
     media=media/10;

     for(i=0; i<=9; i++){
        if(vetor[i]<media)
            {
           soma=soma+1;
        }


     }
     printf("a media geral da sala eh: %.1f\n", media);
     printf("%d estao abaixo da media\n", soma);
  }
