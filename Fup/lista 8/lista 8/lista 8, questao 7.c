#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
	int mat[100][100], i, j;
	int soma = 0;

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			srand(time(NULL));
			mat[i][j] = rand()%99;
		}
	}

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (j < i) {
				soma+=mat[i][j];
			}
		}
	}

	printf("Soma: %d\n", soma);
}
