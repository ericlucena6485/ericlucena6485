#include <stdio.h>

int main (){
	int mat[5][5], i, j;
	int cont = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			mat[i][j] = i*j;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}	
}
