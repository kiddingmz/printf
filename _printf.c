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
	if (format == NULL || op == NULL || (format[0] == '%' &&
			format[1] == '\0'))
		return (-1);

	for (i = 0, j = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			print_char(format[i], &j);
		else if (format[i + 1] == 'c')
			print_char_iter(va_arg(op, int), &j, &i);
		else if (format[i + 1] == 's')
			print_string(va_arg(op, char *), &j, &i);
		else if (format[i + 1] == '%')
			print_char_iter(format[i + 1], &j, &i);
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			print_int(va_arg(op, int), &j, &i, 10);
		else if (format[i + 1] == 'b')
			print_int_b(va_arg(op, int), &j, &i, 2);
		else if (format[i] == '%')
			print_char(format[i], &j);
	}
	va_end(op);
	return (j);
}
