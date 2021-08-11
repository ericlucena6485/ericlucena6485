#include <stdio.h>

int fat(int nfat, int n){
	if (n > 1) {
		nfat*=n;
		fat(nfat, n-2);
	}
	else{
		return nfat;
	}
}

int main() {
	int n;

	printf("Digite um numero: ");
	scanf("%d", &n);

	printf("Fatorial de %d = %d", n, fat(1, n));
}
