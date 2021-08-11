#include <stdio.h> 
#include <string.h> 
 
int main() {
     char str1[] = "eric";
     char str2[] = "lucena";   
    strcat(str1,"_");      
	 printf("str1 depois de strcat(str1, \"_\"):\n%s", str1); 
      strcat(str1, str2);
       printf("\nstr1 depois de strcat(str1, str2):\n%s", str1);     
	     return 0;
		 
	 }
