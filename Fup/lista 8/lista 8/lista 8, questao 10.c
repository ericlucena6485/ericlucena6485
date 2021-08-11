#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int mat[10][10], i, j, soma, somal[10], somac[10];
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			srand(time(NULL));
			mat[i][j] = rand()%99;
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			soma = soma+mat[i][j];
		}
		somal[i] = soma;
	}
	printf("Soma das linhas: %d\n", soma);
	system("pause");
	return 0;
}
