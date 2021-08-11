#include <stdio.h>
#include <stdlib.h>

    int main(){
     int a;
     int c =0;

         printf("digite um numero: ");
         scanf("%d", &a);


                for(int i=1; i<=a; i++){
                if(a%i==0){
                    c++;
                }
             }
               if(c==2){
                    printf("eh primo");
            }
                else{
                    printf("n eh primo");
                }


        return 0;
    }




