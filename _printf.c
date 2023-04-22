#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - print all
 *
 * @format: first param
 * @...: more params
 *
 * Return: lenght of string
 */

int _printf(const char *format, ...)
{
	int i, aux;

	i = aux=0;
	while (format[i] != '\0')
	{
		if (format[i]== '%'){
			aux = i+1;
			while(format[aux] !=' ')
				printf("%d",aux);
		}
		i++;
	}
	return(aux);
}


