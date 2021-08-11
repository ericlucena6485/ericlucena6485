#include<stdio.h>

 int main(){
 	int vetor[20];
 	int i;
 	for(i=0;i<20;i++){
 		printf("digite um numero: ");
 		scanf("%d", &vetor[i]);
 		
	 }
 	for(i=0; i<20; i++){
 		if(vetor[i]<0){
 			printf("\n 0");
		 }
		 else{
		 	printf("\n %d", vetor[i]);
		 }
	 }
	 return 0;
 }
