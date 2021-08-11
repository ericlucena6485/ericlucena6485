#include<stdlib.h>
 #include<stdio.h> 
 
int main(){
   int i, tam=50;
    char nome[tam];
	
	     printf("Digite um nome: "); 
 
         gets(nome); 
	
	
	    for(i=0; i<=5; i++) 
 
  { 
 
    printf("Letra %d: \%c\n", i+1, nome[i]); 
 
  }   
 
  printf("\n\n"); 
 
  system("pause"); 
 
 
} 
