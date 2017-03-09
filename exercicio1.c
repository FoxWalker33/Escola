/*
Exercicio:
	Crie um programa que leia a idade de 3 alunos
	e no final mostre a média dos alunos
*/
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.c>

int main()
{
	
	//definindo estilos
	SetConsoleTitle("Calculando Media");
	textcolor(2);
	
	//Declarando as variaveis
	
	int alunoA, alunoB, alunoC, S;
	float D;
	
	//pegando a idade do pimeio aluno "alunoA"
	
	printf("Insira a idade do primeiro aluno: ");
	textcolor(4);
	scanf("%d", &alunoA);
	textcolor(2);
	
	//pegando a idade do segundo aluno "alunoB"
	
	printf("Insira a idade do segundo aluno: ");
	textcolor(4);
	scanf("%d", &alunoB);
	textcolor(2);
	
	//pegando a idade do terceiro aluno "alunoC"
	
	printf("Insira a idade do terceiro aluno: ");
	textcolor(4);
	scanf("%d", &alunoC);
	
	//"S" soma as idades dos alunos
	
	S = alunoA + alunoB + alunoC;
	
	//Exibe a soma
	
	printf("\n \nSoma das idades: %d", S);
	printf("\n \n");
	
	//"D" calcula a média
	
	D = S / 3;
	
	//Exibe a media
	
	printf("A media de idade dos alunos e: %f", D);
	
	//compar se D é maior ou menor que 20
	
	if(D >= 20)//Se D for maior ele dira "A media e maior que 20" 
	{
		
		printf("\n");
	    printf("\n");
	    printf("\n");		
	    printf("A media e maior que 20");
		
	}
	else //Se nao, ele dira "A media e menor que 20"
	{
				
		printf("\n");
	    printf("\n");
	    printf("\n");		
	    printf("A media e menor que 20");
		
	}
	
    getch();
}
