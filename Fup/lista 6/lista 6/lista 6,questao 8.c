#include <stdio.h>  
#include <conio.h> 
 
int main() { 
  int i,j,p;   
  int veta[10];    
  int vetb[10];    
   int vetc[10]; 
 
  printf("\n entre com os elementos do vetor.\n\n"); 
    
	for (i=0; i<10; i++)   { 
 
   printf("Entre com o %i elemento do vetor 1: " ,i+1); 
   scanf("%i",&veta[i]);
	  
   printf("Entre com o %i elemento do vetor 2: ",i+1);    
   scanf("%i",&vetb[i]);  
    } 
 
     for (p=0; p<10; p++)   {   
	 
	  vetc[p]=veta[p]-vetb[p];  
	    printf("\n a subtracao para elemento %i foi: %i \n", p+1, vetc[p]); 
 
   } 
   scanf("%i",&p);  
   
   return 0;
    } 
