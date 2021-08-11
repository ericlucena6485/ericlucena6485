#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
	int mat[10][10], i, j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			srand(time(NULL));
			mat[i][j] = rand()%99;
		}
	}
	printf("\n");
}
