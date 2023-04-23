#include "main.h"
#include <stdio.h>

/**
 * print_char - print char
 *
 * @op: pointer
 *
 * Return: char
 */

char _char(va_list op)
{
	char c = (char)va_arg(op, int);

	return (c);
}

/**
 * print_int - print int
 *
 * @op: pointer
 *
 * Return: int
 */

int _int(va_list op)
{
	int i = va_arg(op, int);

	return (i);
}

/**
 * print_float - print float
 *
 * @op: pointer
 *
 * Return: float
 */

float _float(va_list op)
{
	float f = va_arg(op, double);

	return (f);
}

/**
 * print_string - print string
 *
 * @op: pointer
 *
 * Return: pointer char
 */

char *_string(va_list op)
{
	char *c = va_arg(op, char*);

	return (c);
}
