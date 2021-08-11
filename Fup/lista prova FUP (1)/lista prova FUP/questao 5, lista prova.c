#include <stdio.h>

int super (int n, int m) {
   if (m == 1){
        return 1;
   }
   if (n == 1){
        return super (m - 1, m - 1);
   }
   return n * super(n - 1, m);
}

int superfat (int n){
    return super(n, n);
}

int main(){

 int k;

 printf("Digite um numero: ");
 scanf("%i", &k);

    printf("o resultado do sf eh %d", superfat(k));

    return(0);
}
