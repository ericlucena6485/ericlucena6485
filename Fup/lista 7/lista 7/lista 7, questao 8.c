#include<stdio.h> 
#include<string.h>
 #include<assert.h> 
 

 
 
 int main() { 
 int concatenar(char s1[], char s2[]) {
 
   char str1[] = "abcd";
     char str2[] = "efgh"; 
 
    concatenar(str1, str2); 
 
    assert(strcmp("abcdefgh", str1) == 0); 
 
    return (0);
	 } 
}
