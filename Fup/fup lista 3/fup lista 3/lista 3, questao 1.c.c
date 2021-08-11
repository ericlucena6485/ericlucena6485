#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b;

    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite um numero: ");
    scanf("%d", &b);

    if(a>b) {
        printf("o a eh maior\n");
    }

     else if (b>a){
        printf("o b eh maior\n");
     }
     else{
        printf("os numeros sao iguais");
     }

    system("pause\n");
}
