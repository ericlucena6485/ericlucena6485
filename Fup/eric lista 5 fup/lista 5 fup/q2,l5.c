#include<stdio.h>
#include<stdlib.h>

int main(){
 int n, id=0;
 printf("digite um numero: ");
 scanf("%d", &n);

 for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        id++;

        printf("%d",id);

  }
 printf("\n");
 }


 return 0;
 }
