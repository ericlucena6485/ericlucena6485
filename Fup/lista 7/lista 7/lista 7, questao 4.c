 #include <string.h> 
 #include <stdio.h> 

 int conta(char c, char *s){ 
 
int i; int n = 0; 
 
for(i=0; s[i] != '\0';i++){ 
  if(s[i] == c) 
    n = n+1;

 } 
 
return n;
 } 
 
int main(){ 
 
char s[20];
 char c[1]; 
 
printf("Insira a string\n");
 scanf("%s",s); 
 
printf("Insira o caracter\n");
 scanf("%c",c); 
 
printf("O caracter aparece %d vezes\n", conta); 

return 0;
 } 
