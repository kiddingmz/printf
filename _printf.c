#include "main.h"

/**
 * _printf - print
 *
 * @format: string
 * @...: more params
 *
 * Return: length of print string
 */

int _printf(const char *format, ...)
{
	va_list op;
	unsigned int i, j;

	va_start(op, format);
	if (format == NULL)
		return (-1);

	for (i = 0, j = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			j++;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(op, int));
			i++;
			j++;
		}
		else if (format[i + 1] == 's')
		{
			j += _putstring(va_arg(op, char *));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar(format[i + 1]);
			i++;
			j++;
		}

	}
	va_end(op);
	return (j);
}
