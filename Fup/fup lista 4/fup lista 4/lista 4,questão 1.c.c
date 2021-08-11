#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){

    int x, n;

    printf("digite um valor: ");
    scanf("%d", &x);

    printf("digite um valor para o expoente: ");
    scanf("%d", &n);
    int pot = x;
    for( int i =1 ;i<n; i++){
        pot*=x;
    }
    printf("o resultado eh: %d\n", pot);
    return 0;
  }
