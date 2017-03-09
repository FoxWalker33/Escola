/*
Exercicio
Crie um programa que LEIA 2 numeros reais,
calcule a soma dos dois e imprima na tela
o resultado
*/
#include<stdio.h>

int main()
{
	float numero1, numero2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	soma = numero1 + numero2;
	
	printf("O resultado e: %f ", soma  );
	system("pause");
	
}
