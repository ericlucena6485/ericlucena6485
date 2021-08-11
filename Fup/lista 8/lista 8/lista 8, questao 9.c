#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int matA[10][20], matB[20][10], i, j;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			srand(time(NULL));
			matA[i][j] = rand()%99;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 20; j++) {
			printf("%4d", matA[i][j]);
		}
		printf("\n");
	}

	system("pause");

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 10; j++) {
			matB[i][j]=matA[j][i];
		}
	}

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 10; j++) {
			printf("%4d", matB[i][j]);
		}
		printf("\n");
	}
	system("pause");
	
	return 0;
}
