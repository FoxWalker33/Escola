#include<stdio.h>

int main(void)
{
	int Vitoria[3] = {10, 11, 12}, Karla[3] = {12, 13, 15}, hora, resp, RESP;
 
	
	printf("Prostitutas e horarios disponiveis \n\nVitoria: %d horas, %d horas e %d horas \n\nKarla: %d horas, %d horas e %d horas", Vitoria[0], Vitoria[1], Vitoria[2], Karla[0], Karla[1], Karla[2]);
	printf("\n\n\nEscolha um horario: ");
	scanf("%d", &hora);
    
    if(hora != 10 || 11 || 12 || 13 || 15)
    {
    	printf("Escoha uma hora valida\n");
	}
	if(hora == 10)
	{
		printf("Prostituta disponivel para as %d horas: Vitoria", hora);
		printf("\nDeseja marcar com Vitoria [1 = sim/0 = nao]: ");
		scanf("%d", &resp);
		if(&resp >= 1)
		{
			printf("Hora marcada com sucesso\n");
		}else{
			printf("rinicie o progama\n");
		}
		
	} 
	if(hora == 11)
	{
		printf("Prostituta disponivel para as %d horas: Vitoria", hora);
		printf("\nDeseja marcar com Vitoria [1 = sim/0 = nao]: ");
		scanf("%d", &resp);
		if(resp >= 1)
		{
			printf("marcado com sucesso\n");
		}else{
			printf("reinicie o programa\n");
		}
		
		
	} 
	if(hora == 12)
	{
		printf("Prostituta disponivel para as %d horas: Vitoria e Karla", hora);
		printf("\nPara tranzar com Karla digite 0, ou para tranzar com Vioria digite 1:");
		scanf("%d", &resp);
		if(resp <= 0)
		{
			printf("Hora marcada com Karla\n");
		}else{
			printf("Hora marcada com Vitoria\n");
		}
		
	} 
	if(hora == 13)
	{
		printf("Prostituta disponivel para as %d horas: Karla", hora);
		printf("\nDeseja marcar com Karla [1 = sim/0 = nao]: ");
		scanf("%d", &resp);
		if(resp >= 1)
		{
			printf("Hora marcada com sucesso\n");
		}else{
			printf("rinicie o progama\n");
		}
		
	} 
	if(hora == 15)
	{
		printf("Prostituta disponivel para as %d horas: Karla", hora);
		printf("\nDeseja marcar com Karla [1 = sim/0 = nao]: ");
		scanf("%d", &resp);
		if(resp >= 1)
		{
			printf("Hora marcada com sucesso\n");
		}else{
			printf("rinicie o progama\n");
		}
		
	} 
	system("PAUSE");
}
