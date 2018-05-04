#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "forWether.h"

double MeanPoint(double *sum, int length)
{
	return *sum / length;
}

//Weather * wet(int *length)
//{
//	Weather *wet = (Weather*)malloc(sizeof(Weather) * *length);
//	double sum = 0;
//	if (wet != NULL)
//	{
//		for (size_t i = 0; i < *length; i++)
//		{
//			(wet + i)->Period = (char*)malloc(sizeof(char));
//			
//
//			(wet + i)->mediumPoint = (double*)malloc(sizeof(double));
//			
//
//			(wet + i)->minPoint = (double*)malloc(sizeof(double));
//			
//
//			(wet + i)->maxPoint = (double*)malloc(sizeof(double));
//			
//
//			(wet + i)->nOfObserv = (int*)malloc(sizeof(int));			
//			
//		}
//	}
//
//	return wet;
//}