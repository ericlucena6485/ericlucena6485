#include <stdio.h>
#include <string.h>

int pali(int c, int n, char str[]){
	if (n > 1) {
		if (str[n] != str[n-2]) {
			c = 0;
		}
		pali(c, n-1, str);
	}
	else{
		return c;
	}
}

int main() {
	char str[100];

	printf("Digite uma palavra: ");
	scanf("%s", &str);

	if (pali(1, strlen(str)-1, str) == 1) {
		printf("e palindromo.");
	}
	else{
		printf("nao e palindromo.");
	}
}
