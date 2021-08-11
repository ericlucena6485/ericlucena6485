#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main(){
   int a,q, n,an, i;

       printf("digite o valor do primeiro termo:\n");
       scanf("%d",&a);
       printf("digite o valor do primeiro termo:\n");
       scanf("%d",&q);
       printf("digite o valor do primeiro termo:\n");
       scanf("%d",&n);

       for(int i=1;i<=n; i++){
          an=a*pow(q,i-1);
          printf("o resultado da P.G e igual a: %d \n", an);

       }
 return 0;
 }
