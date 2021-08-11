
#include <stdio.h>
int main (){
    int i, j,vetor[10], aux;

    for (i = 0 ; i < 10 ; i++){
        printf("Digite o valor:\n");
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<=10;i++){
        for(j=i+1;j<10;j++){
            if(vetor[j]==vetor[i]){
                aux=vetor[i];
                printf("%d ",aux);
            }
        }
    }

    return 0;
}
