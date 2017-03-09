#include<stdio.h>
#include<windows.h>
#include<conio.c>

int main()
{
	int decimal, binario;
	SetConsoleTitle("Conversor para Binario");
	textcolor(2);
	
	printf("Informe um numero para converter para BINARIO\n\n");
	printf("NUMERO => ");
	scanf("%d", &decimal);
	

	
	while(decimal >= 2)
	{
		
		binario = decimal % 2;
		decimal = decimal / 2;
		printf(" %d", binario);
		
	}
	
	printf(" %d", decimal);
    printf("\n\n");
    printf("Programado por: Adryan Alencar");
    printf("\n\n");
	system("pause");
	
}
