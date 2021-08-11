#include <stdio.h>

int main (){
	int mat[4][4], i, j;
	int cont = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (mat[i][j] > 10) {
				cont++;
			}
		}
	}
	
	printf("%d\n", cont);
}
