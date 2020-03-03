//Faça um programa que receba o valor da passagem de ônibus atual
//calcule e mostre o novo valor, sabendo que sofreu um reajuste de 12%

#include <stdio.h>

int main(void) 
{
float vAntigo, vAtual;
float reajuste = 0.12;

  printf("Digite o valor antigo da passagem\n");
   scanf("%f", &vAntigo);
  vAtual = (vAntigo * reajuste) + vAntigo;

printf("O valor atual da passagem é R$ %.2f:\n", vAtual);

  return 0;
}

//Faça um programa que receba  os valores antigo e novo  da passagem de ônibus mostrando o percentual de aumento ( novo-velho)/velho

#include <stdio.h>

int main(void) 
{
float vAntigo, vAtual, reajuste;

  printf("Digite o valor antigo da passagem\n");
   scanf("%f", &vAntigo);
  printf("Digite o valor novo da passagem\n");
   scanf("%f", &vAtual);
  //reajuste = (vAtual - vAntigo) / vAntigo;
  reajuste = ((vAtual / vAntigo) * 100) - 100;

printf("O percentual de aumento foi de %f:\n", reajuste);

  return 0;
}
