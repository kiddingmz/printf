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
	unsigned int i, len_str, status = 1;
	va_list op;
	char *str = NULL, n, *buffer = malloc(sizeof(char) * 4096);

	len_str = _strlen(format);
	va_start(op, format);
	_memset(buffer, '\0', 4096);
	for (i = 0; i < len_str; i++)
	{
		status = 1;
		if (*(format + i) == '%')
		{
			if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				str =  _int(op, 10);
				_strcpy(buffer, str);
				status = 0;
			}
			else if (format[i + 1] == 'c')
			{
				n = _char(op);
				_charcpy(buffer, n);
				status = 0;
			}
			else if (format[i + 1] == 's')
			{
				str = _string(op);
				_strcpy(buffer, str);
				status = 0;
			}
			else if (format[i + 1] == '%')
			{
				_charcpy(buffer, format[i + 1]);
				status = 0;
			}
			else if (format[i + 1] == 'b')
			{
				str = _int(op, 2);
				if(str != NULL)
				{
					_strcpy(buffer, str);
					status = 0;
				}
			}
			else if (format[i + 1] == 'u')
			{
				str = _int(op, 10);
				_strcpy(buffer, str);
				status = 0;
			}
			else if (format[i + 1] == 'o')
			{
				str = _int(op, 8);
				_strcpy(buffer, str);
				status = 0;
			}
			else if (format[i + 1] == 'x' || 
					format[i + 1] == 'X')
			{
				str = _int(op, 16);
				_strcpy(buffer, str);
				status = 0;
			}
			if (status == 0)
				i++;
		}
		else
			_charcpy(buffer, format[i]);
	}
	write(1, buffer, _strlen(buffer));
	free(buffer);
	va_end(op);
	return (_strlen(buffer));
}
