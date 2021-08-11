#include<stdio.h>


  int main(){
    char nome[25],i;

      printf("digite um nome: ");
     fgets(nome,25,stdin);

      for(i=0; i<6; ++i){
        printf("%c", nome[i]);
      }

   printf("\n");

   return 0;
  }
