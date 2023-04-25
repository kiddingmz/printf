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
	unsigned int i, len_str, total_len, status;
	va_list op;
	char *buffer = malloc(sizeof(char) * 4096);
	
	total_len = 0;
	len_str = _strlen(format);
	va_start(op, format);
	status = 1;

	for (i = 0; i < len_str; i++)
	{
		status = 1;
		if (*(format + i) == '%')
		{
			if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				char *n =  _int(op);
				_strcpy(buffer, n);
				status = 0;
			}
			else if (format[i + 1] == 'c')
			{
				char n = (char)va_arg(op, int);
				_charcpy(buffer, n);
				status = 0;
			}
			else if (format[i + 1] == 's')
			{
				char *n = _string(op);
				_strcpy(buffer, n);
				status = 0;
			}

			if (status == 0)
				i++;
		}

		if (status == 1)
			_charcpy(buffer, format[i]);
	}	

	total_len = _strlen(buffer);

	write(1, buffer, total_len);
	
	free(buffer);
	putchar('\n');
	va_end(op);
	
	return (total_len);
}
