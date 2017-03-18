/*eExercicio
Leia 3 notas de um aluno e depois imprima a media da nota*/

#include<stdio.h>
#include<locale.h>

int main()
{
	float nA, nB, nC, media;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira as tres notas: ");
	scanf("%f %f %f", &nA, &nB, &nC);
	
	media = (nA + nB + nC) / 3;
	
	printf("\nA media é: %f\n\n", media);

	if(media >= 6)
	{
		printf("Parabens, passou de ano");
	}else{
		printf("Desgracado, foi reprovado");
	}
	
}
