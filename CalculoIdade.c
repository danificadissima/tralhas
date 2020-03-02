#include <stdio.h>

int main(){

	int nasc;

	int atual;

	int idade;

	printf("Digite o ano de nascimento: \n");

	scanf ("%d", &nasc);

	printf("Digite ano atual: \n");

	scanf ("%d", &atual);

	idade = atual - nasc;

	printf("\nSua idade atual é: %d", idade);

	printf("\nEm 2020 você terá: %d", 2020 - nasc);

	return 0;

}
