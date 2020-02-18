// Faça um algoritmo para mostrar a área de um retângulo cujas dimensões são obtidas com o usuário

#include <stdio.h>

int main(void) {
int  altura, base, result;

  printf("Digite a altura do retangulo:\n");
  scanf("%d", &altura);
  printf("Digite a base do retangulo:\n");
  scanf("%d", &base);
  result = base * altura;
  printf("A área do retangulo é: %d\n", result);

  return 0;
}
