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
	int i, len_all_string, len_per;

	i = len_all_string = len_per = 0;
	while (format[i] != '\0')
	{
		len_all_string++;
		if (format[i] == '%')
			len_per++;
		i++;
	}
	
	printf("\nQuantidade de %% na string: %d\n", len_per++);
	return (len_all_string);
}
		
