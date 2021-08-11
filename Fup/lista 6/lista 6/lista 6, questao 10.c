#include <stdio.h> 
#include <stdlib.h> 
 
int main(){
     int vet[10],i,resp=1,temp;
	    
		 for(i=0; i<10; i++){                
		    printf(" Entre com um numero: ");                
		    scanf("%d",&vet[i]);        }       
			  temp = vet[0];         
			  for (i=1;i<10;i++){
			    if(vet[i] == temp){ 
                 resp++;                
				   }
	                 else{
	                  if(resp > 1){  
                       printf("\n O valor %i esta repetido %i vezes\n",temp,resp);
	                        resp = 1;   
			              }   
						         temp = vet[i]; 
			                 }
				         }
					         if(resp > 1){
				                printf("\n O valor %i esta repetido %i vezes\n",temp,resp);
							         }
							         system("pause");     
									 return 0;
									     }  
