#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * _printf - print all
 *
 * @ormat: first param
 * @...: more params
 *
 * Return: lenght of string
 */

int _printf(const char *format, ...)
{
	unsigned int i, len_str, total_len;
	va_list op;
	char *buffer= NULL;
	
	buffer = malloc(sizeof(char)*4096);
	total_len = 0;

	len_str = _strlen(format);
	va_start(op, format);

	for (i = 0; i < len_str; i++)
	{
		if (format[i] == 'i' || format[i] == 'd')
		{
			char *n =  _int(op);
			/*_strcpy(buffer, n);*/
			strncpy(buffer, n, _strlen(n));
			buffer++;
		}
		else if (format[i] == 'c')
		{
			char n = va_arg(op, int);
			buffer[i++] = n;
		}
		else if (format[i] == 's')
		{
			char *n = _string(op);
			_strcpy(buffer, n);
			buffer++;
		}
	}

	total_len = _strlen(buffer);

	write(1, buffer, total_len);
	
	free(buffer);
	putchar('\n');
	va_end(op);
	
	return (total_len);
}
