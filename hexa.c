#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void){
	
	int numeroEntrada, q, resto;
    SetConsoleTitle("Conversor para Hexadecimal");
	char exa[10], getInt[10];
	
	
	printf("Informe um numero para converter para EXADECIMAL\n\n");
	printf("NUMERO => ");
	scanf("%i", &numeroEntrada);
	
	
	do{
		q = numeroEntrada / 16;
		resto = numeroEntrada % 16;
		numeroEntrada /= 16;
		
		switch(resto){
			case 10:
				strcat(exa, "A");
			break;
			case 11:
				strcat(exa, "B");
			break;
			case 12:
				strcat(exa, "C");
			break;
			case 13:
				strcat(exa, "D");
			break;
			case 14:
				strcat(exa, "E");
			break;
			case 15:
				strcat(exa, "F");
			break;
			case 16:
				strcat(exa, "G");
			break;
			default:
				sprintf(getInt, "%i", resto);
				strcat(exa, getInt);
		}
	}while(q != 0);
	printf("%s", exa);
	return 0;
	
}
