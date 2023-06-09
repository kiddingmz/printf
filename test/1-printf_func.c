#include "main.h"

/**
 * _char - print char
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
 * _int - print int
 *
 * @op: pointer
 * @base: base
 *
 * Return: int
 */

char *_int(va_list op, int base)
{
	int i = va_arg(op, int);
	char s[512];
	char *res = _itoa(s, i, base);

	return (res);
}

/**
 * _float - print float
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
 * _string - print string
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
