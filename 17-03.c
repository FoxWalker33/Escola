/*Exercicio:
Ler um numero inteiro e imprimir seu sucessor e antecessor.
*/
#include<stdio.h>

int main()
{
	int num, suc, ant;
	
	printf("Insira o numero:" );
	scanf("%d", &num);
	
	suc = num + 1;
	ant = ant - 1;
	
	printf("O sucessor de ", num);
	printf("%d", suc);
	
	
}
