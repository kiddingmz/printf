#include <stdarg.h>
#include <unistd.h>
#include "main.h"

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
	unsigned int i, len_str;
	va_list op;

	len_str = _strlen(format);
	va_start(op, format);

	for (i = 0; i < len_str; i++)
	{
		if (format[i] == 'i' || format[i] == 'd')
		{
			char *n =  _int(op);
			write(1, n, _strlen(n));
		}
		else if (format[i] == 'c')
		{
			char n = va_arg(op, int);
			write(1, &n, 1);
		}
		else if (format[i] == 's')
		{
			char *n = _string(op);
			write(1, n, _strlen(n)); 
		}
	}
	
	putchar('\n');
	va_end(op);
	return (0);
}
