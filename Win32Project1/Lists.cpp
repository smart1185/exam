#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "forWether.h"

void UpperShowList()
{	
	printf("=====================================================================================\n");
	printf("Период | Среднее значение | Минимальное значение(дата) | Максимальное значение(дата) | Количество наблюдений\n");
	printf(" ------------------------------------------------------------------------------------\n");
	printf("\n");
}
void periodEnter(char *start, char *end)
{			
	
	printf("Enter period (dd.mm.yyyy)\n");
	scanf("%s", start);	
	scanf("%s", end);
}

void PrintPeriodInfo(char *start, char *end)
{
	printf("\tInformation from %s till %s \n", start, end);
	printf("=============================================\n");
	//тут будет результат
	printf("=============================================\n");
}
