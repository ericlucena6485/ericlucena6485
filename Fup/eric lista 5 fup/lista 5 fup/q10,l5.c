#include<stdio.h>
#include<stdlib.h>

 int main(){
     int x, y, n;
     printf("digite um numero: ");
     scanf("%d",&x);
     printf("digite um numero: ");
     scanf("%d",&y);


   int pa=1+n;
   int pb=1+n;
   while(pa!=pb){
      if(pa<pb){
        pa=pa+n;
      }
      else{
        pb=pb+n;
      }

     }
   printf("a posicao que os cangurus se encontram eh: %d ",pa);
   return 0;
 }
