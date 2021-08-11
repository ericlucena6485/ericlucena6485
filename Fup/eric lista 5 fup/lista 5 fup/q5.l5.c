#include<Stdio.h>
#include<stdlib.h>

  int main(){
     int x,y;
     int resto,mdc;
        resto=0;


        printf("digite dois numeros: ");
        scanf("%d %d", &x,&y);


  while(y!=0){
    resto=x%y;
    x=y;
    y=resto;
  }

   mdc=x;
   printf("o mdc eh: %d \n",mdc);

   return 0;
  }
