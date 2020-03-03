//Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. 
// Calcule e mostre o salário a receber seguindo as regras abaixo:
//	a) a hora trabalhada vale a metade do salário mínimo;
// 	b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
//  c) o imposto equivale a 3% do salário bruto;
//  d) o salário a receber equivale ao salário bruto menos o imposto. 


//Solução 1

#include <stdio.h>

int main() {
float salarioMin, horasTrabalhadas, salarioFinal, valorHora, salarioBruto;

printf("Insira o Salário minimo: \n");
scanf ("%f", &salarioMin);
printf("Insira o total de horas trabalhadas: \n");
scanf ("%f", &horasTrabalhadas);
valorHora= salarioMin/2;
salarioBruto= horasTrabalhadas*valorHora;
salarioFinal= salarioBruto*0.97;
printf(" Salario liquido é de: %f \n", salarioFinal );

return 0;
}

//Solução 2 


#include <stdio.h>


int main() {
float salarioMin, horasTrabalhadas, salarioFinal, valorHora, salarioBruto, imposto;

  printf("Insira o Salário minimo: \n");
	scanf ("%f", &salarioMin);
  printf("Insira o total de horas trabalhadas: \n");
	scanf ("%f", &horasTrabalhadas);
  valorHora= salarioMin/2;
  salarioBruto= horasTrabalhadas*valorHora;
  imposto = salarioBruto*3/100;
  salarioFinal= salarioBruto - imposto;
  printf(" Salario liquido é de: %f \n", salarioFinal );
  
  return 0;
}



// Faça um programa que receba o salário de um funcionário e o percentual de aumento 
//calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>


int main() {
float salario, perc, novoSalario;


  printf("Insira o valor do salário : \n");
	scanf ("%f", &salario);
  printf("Insira o percentual de aumento: \n");
	scanf ("%f", &perc);
  perc= (perc / 100)*100;
  novoSalario = salario + perc;
  
  printf(" O valor de aumento é de R$: %2.f \n",perc );

  printf(" O novo salario é %f \n", novoSalario );

  return 0;
}
