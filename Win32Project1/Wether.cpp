#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>

#include "forWether.h"
#include "ShowList.h"

FILE * fp, fp1;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Weather *wet = (Weather*)malloc(sizeof(Weather) * 100);
	char c;
	char path[100] = "C:/Users/HP/Desktop/Exam3 (прогноз погоды)/file_we.txt";
	if ((fp = fopen(path, "r")) != NULL)

	{
		int i = 0;
		while ((c=getc(fp))!=EOF)
		{
			printf("%s", c);
		}

	
	}
	fclose(fp);
	system("pause");
}