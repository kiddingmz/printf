#include "main.h"

/**
 * _itoa - int to string
 *
 * @s: string
 * @number:  number to convert
 * @base: base
 *
 * Return: string
 */

char *_itoa(char *s, int number, int base)
{
	if (number <= -base)
		s = _itoa(s, number / base, base);
	*s++ = '0' - number % base;
	return (s);
}

/**
 * print_int - print int
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int(int number, unsigned int *iterator, unsigned int *i, int base)
{
	char ss[1024];
	char *s = ss;

	if (number < 0)
		*iterator += _putchar('-');
	else
		number = -number;
	*_itoa(s, number, base) = '\0';
	*iterator += _putstring(s);
	*i = *i + 1;
}

/**
 * print_int_b - print binary
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int_b(int number, unsigned int *iterator, unsigned int *i, int base)
{
	char ss[1024];
	char *s = ss;
	size_t len;
	int res, sinal;

	sinal = 0;
	if (number < 0)

		sinal = 1;
	else
		number = -number;
	*_itoa(s, number, base) = '\0';
	len = _strlen(s);

	if (sinal == 0)
	{
		*iterator += _putstring(s);
		*i = *i + 1;
	}
	else if (sinal == 1 && len < 32)
	{
		res = 32 - len;
		while (res--)
			*iterator += _putchar('1');
		*iterator += _putstring(s);
		*i = *i + 1;
	}
	else if (sinal == 1 && len > 32 && len < 64)
	{
		res = 64 - len + 1;
		while (res--)
			*iterator += _putchar('1');
		*iterator += _putstring(s);
		*i = *i + 1;
	}
}

/**
 * print_int_u - print unsinged int
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int_u(unsigned int number, unsigned int *iterator, unsigned int *i, unsigned int base)
{
	char ss[1024];
	char *s = ss;
	
	*_itoa_u(s, number, base, 'u') = '\0';
	*iterator += _putstring(s);
	*i = *i + 1;
}

/**
 * print_int_o - print octal
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int_o(unsigned int number, unsigned int *iterator, unsigned int *i, unsigned int base)
{
	char ss[1024];
	char *s = ss;

	*_itoa_u(s, number, base, 'o') = '\0';
	*iterator += _putstring(s);
	*i = *i + 1;
}
