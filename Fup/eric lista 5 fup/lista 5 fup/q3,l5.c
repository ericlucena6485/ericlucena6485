#include<stdio.h>
#include<stdlib.h>
  int main(){
    int n, soma=0;
    printf("digite um numero: ");
    scanf("%d", &n);
   for(int i=1; i<n; ++i){
    if (n%i == 0){
        soma=soma+i;
    }
   }
    if (n == soma) {
        printf("%d eh um numero perfeito.\n",n);

  }

    else {
    printf("%d nao eh um numero perfeito.",n);
 }
return 0;
}
