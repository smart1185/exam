#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "forWether.h"

void UpperShowList()
{
	/*printf("\t NGS Daily Temperature Report");*/
	printf("=====================================================================================\n");
	printf("Период | Среднее значение | Минимальное значение(дата) | Максимальное значение(дата) | Количество наблюдений\n");
	printf(" ------------------------------------------------------------------------------------\n");
	printf("\n");
}
void periodEnter(Period *start, Period *end)
{
	start->day = (int*)malloc(sizeof(int));
	start->month = (int*)malloc(sizeof(int));
	start->year = (int*)malloc(sizeof(int));

	end->day = (int*)malloc(sizeof(int));
	end->month = (int*)malloc(sizeof(int));
	end->year = (int*)malloc(sizeof(int));

	printf("\tPlease enter period: ");
	scanf("\t\t%d.%d.%d - %d.%d.%d", *start->day, *start->month, *start->year,
		*end->day, *end->month, *end->year);
}

void PrintPeriodInfo(Period *start, Period *end)
{
	printf("\tInformation for : %d.%d.%d - %d.%d.%d", *start->day, *start->month, *start->year,
		*end->day, *end->month, *end->year);
}
