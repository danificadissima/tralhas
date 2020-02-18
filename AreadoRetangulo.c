//Faça um programa que receba o valor da passagem de ônibus atual calcule e mostre o novo valor, sabendo que sofreu um reajuste de 12%

#include <stdio.h>

int main(void) 
{
float vAntigo, vAtual;
float reajuste = 0.12;

  printf("Digite o valor antigo da passagem\n");
   scanf("%f", &vAntigo);
  vAtual = (vAntigo * reajuste) + vAntigo;

printf("O valor atual da passagem é %.2f:\n", vAtual);

  return 0;
}
