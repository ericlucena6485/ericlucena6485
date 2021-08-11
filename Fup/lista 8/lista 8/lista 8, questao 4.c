#include <stdio.h>

int mat[4][4], i, j;

int maior(int l){
	int n1 = mat[l][0];
	int n2 = mat[l][1];
	int n3 = mat[l][2];
	int n4 = mat[l][3];

	if (n1 >= n2 && n1 >= n3 && n1 >= n4) {
		return 0;
	}
	else if (n2 >= n3 && n2 >= n4 && n2 >= n1) {
		return 1;
	}
	else if (n3 >= n4 && n3 >= n1 && n3 >= n2) {
		return 2;
	}
	else{
		return 3;
	}
}

int main (){
	int cont = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	if (mat[0][maior(0)] >= mat[1][maior(1)] && mat[0][maior(0)] >= mat[2][maior(2)] && mat[0][maior(0)] >= mat[3][maior(3)]) {
		printf("Maior: 0,%d", maior(0));
	}
	else if (mat[1][maior(1)] >= mat[2][maior(2)] && mat[1][maior(1)] >= mat[3][maior(3)] && mat[1][maior(1)] >= mat[0][maior(0)]) {
		printf("Maior: 1,%d", maior(1));
	}
	else if (mat[2][maior(2)] >= mat[3][maior(3)] && mat[2][maior(2)] >= mat[0][maior(0)] && mat[2][maior(2)] >= mat[1][maior(1)]) {
		printf("Maior: 2,%d", maior(2));
	}
	else{
		printf("Maior: 3,%d", maior(3));
	}
}
