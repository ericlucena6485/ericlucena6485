#include<stdio.h>
#include<stdlib.h>

 int main(){
   int n,k, res=1;

   printf("digite um numero para a base: ");
   scanf("%d", &n);
   printf("digite um numero para o expoente: ");
   scanf("%d", &k);

   for(int i=1; i<=k; i++){
    res=res*n;
   }

 printf("res eh: %d",res);
 return 0;

 }
