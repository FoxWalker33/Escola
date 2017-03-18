#include<stdio.h>

int  main()
{
	int idade;
	
	printf("Insira a idade: ");
	scanf("%d", &idade);
	
	if(idade <= 8)
	{
		printf("Idade infatil");
	}
	if(idade >= 9 && idade <=  13)
	{
		printf("pre-adolescente");	
	} 
		if(idade >= 14 && idade <=  17)
	{
		printf("adolescente");	
	} 
		if(idade >= 18)
	{
		printf("adulto");	
	} 
	
}
