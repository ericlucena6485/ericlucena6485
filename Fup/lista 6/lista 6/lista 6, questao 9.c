#include<stdio.h>

 int main(){
 	int i, vet[100];
 	
 	for(i=0; i<100; i++){
 		vet[i]=i;
	 }
	 for(i=0; i<100; i++){
	 	if(vet[i]%7==0 || vet[i]%10==7){
	 		vet[i]=vet[i]+1;
		 }
	 }
   for(i=0; i<100; i++){
   	printf(" %d ", vet[i]);
   }
   
   return 0;
  }
