//Faça um programa que mostre o sucessor e o antecessor de um número inteiro fornecido pelo usuário.


#include<stdio.h>
#include<math.h>
int main(void)
{
int numero, r1, r2;
printf("\n Digite um numero:");
scanf("%d",&numero);
r1= numero + 1;
r2= numero - 1;
printf("\n O antecessor é: %d",r2);
printf("\n O sucessor é: %d",r1);
return (0);

}
