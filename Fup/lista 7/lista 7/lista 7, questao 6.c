 #include <stdio.h>
  #include <string.h> 
 
int main(void){ 
 
 char *vogais = "aeiouAEIOU";
 char *texto = "texto sem vogal"; 
    int i;   
	 for(i = 0; i < strlen(texto); ++i)
	      if(!(strchr(vogais, texto[i]))) 
		       printf("%c", texto[i]); 
 
 return 0; 
 } 
