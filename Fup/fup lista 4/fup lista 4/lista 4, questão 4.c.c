#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
    int x, i;
      printf("digite um numero: ");
      scanf("%d", &x);

      for(int i=x; i>=0; i--){
        if(x%i==0){
            printf("eh divisivel por %d\n", i,x);
        }
      }

  return 0;

  }
