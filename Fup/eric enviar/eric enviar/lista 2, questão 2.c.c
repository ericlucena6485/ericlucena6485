#include <stdio.h>
#include <stdlib.h>

void main(){

 int a, b, c;

 printf("digite um numero: ");
 scanf("%d", &a);
 printf("\ndigite um numero: ");
 scanf("%d", &b);
 printf("\ndigite um numero: ");
 scanf("%d", &c);
 printf("\na soma dos numeros: %d", (a+b)+c);


 printf("\nresolucao: %d", (a-b)*c);

 printf("\nresolucao: %d", a*b-c);

 printf("\nresolucao: %d", a/b+c);

 printf("\nresto da divisao: %d", (a+c)%(b-c));

 system("pause");


}
