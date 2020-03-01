// Faça um algoritmo para calcular  quantos metros de madeira serão necessários e o preço a pagar para emoldurar um quadro cujas dimensões
//são fornecidas pelo usuário. Sabe-se que o preço do metro da madeira custa R$ 5,00

#include <stdio.h>

float tAltura, tBase, result;
float metro = 5.00;

int main(void) {
  printf("Digite a alturado quadro:"); 
  scanf("%f",  &tAltura);
  printf("Digite o tamanho do quadro:");
  scanf("%f", &tBase);

  result = (tAltura * tBase) *5;
  printf("O preço ficou em R$: %.2f\n", result);

  return (0);
}
