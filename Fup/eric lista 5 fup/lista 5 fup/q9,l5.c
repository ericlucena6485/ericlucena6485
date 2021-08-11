#include<stdio.h>
#include<stdlib.h>


int primo(int x){
  int cont=0;
  int i;
  for(i=1; i<=x;i++){
    if(x%i==0){
        cont=cont+1;
    }
  }
   if(cont==2){
return 0;  }
   else{
    return 1;
 }
}

 int main(){
  int n,p,i;
  p=0;
  i=0;
  printf("digite um numero:");
  scanf("%d",&n);

  while(i!=n){
     p=p+1;
    if(primo(p)==0){
    i=i+1;
     }

 }
  printf("%d",p);
  return 0;
}



