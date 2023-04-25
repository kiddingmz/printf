#include "main.h"

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
	unsigned int i, j, len_str;
	va_list op;
	char *str = NULL, n;

	len_str = _strlen(format);
	va_start(op, format);
	for (i = j = 0; i < len_str; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				n = (char)va_arg(op, int);
				_putchar(n);
				j++;
			}
			else if (format[i + 1] == 's')
			{
				str = _string(op);
				j += write(1, str, _strlen(str));	
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(op);
	return (j);
}
