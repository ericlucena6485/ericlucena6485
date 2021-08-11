#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma=0,n;
    printf("digite um numero: ");
    scanf("%d", &n);
    for(int i=1;i<=n; i++){
        soma=soma+i;
    }
    printf("a soma dos numeros eh: %d",soma);
    return 0;
}
