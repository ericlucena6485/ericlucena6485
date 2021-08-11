#include <stdio.h>

int pot(int by, int er){
	if (er > 1) {
		by *= pot(by, er-1);
	}
	else{
		return by;
	}
}

int main() {
	int by, er;

	printf("Base: ");
	scanf("%d", &by);
	printf("Expoente: ");
	scanf("%d", &er);

	printf("Resultado: %d", pot(by, er));	

	return 0;
}
