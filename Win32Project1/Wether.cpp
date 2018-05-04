#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>

#include "forWether.h"
#include "ShowList.h"

FILE * W;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Weather *wet = (Weather*)malloc(sizeof(Weather) * 100);
	
	W = fopen("1.csv", "r");
	
	
	
	fclose(W);
	system("pause");
}
