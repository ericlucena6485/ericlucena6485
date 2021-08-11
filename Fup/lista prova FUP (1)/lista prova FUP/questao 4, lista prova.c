#include <stdio.h>

void func();

int main() {
  int tamanho;
  printf("Tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho];
  printf("Valores vetor: ");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);
  }

  int op;
  printf("Operacao: ");
  scanf("%d", &op);

  func(tamanho, vetor, op, 0);

  return 0;
}

void func(int n, int v[], int k, int cont) {
  if (k == 0) {
    if (cont <= n - 1) {
      printf("%d", v[cont]);
      func (n, v, k, cont + 1);
    }
  } else if(k == 1) {
    if (n != 0) {
      printf("%d", v[n - 1]);
      func ((n - 1), v, k, cont);
    }
  } else if (k == 2) {
    v[n - 2] += v[n - 1];
    if (n >= 1)
      func ((n - 1), v, k, cont);
    else
      printf("%d", v[0]);
  } else {
    printf("ERROR");
  }
}
