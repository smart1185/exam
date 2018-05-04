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
	
	Weather *wet = (Weather*)malloc(sizeof(Weather));
	Buf *b=(Buf*)malloc(sizeof(Buf));
	
	char *c;	
	W = fopen("1.csv", "r");
	
	int i=0;
	while (1)
	{
		b=(Buf*)realloc(b,(i+1)*sizeof(Buf));
		(b+i)->buf=(char*)malloc(sizeof(char)*500);
		c=fgets((b+i)->buf, sizeeof(char)*500,W);
		if (c==NULL)
        {
            if(feof(W)!=0)
                break;
            else{
                printf("\nReading error\n");
                break;
            }
        }
        i++;
	}

	
	
	fclose(W);
	system("pause");
}
