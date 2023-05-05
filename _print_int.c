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
	if (number >= base)
		s = _itoa(s, number / base, base);
	*s++ = number % base + '0';
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
	char ss[512];
	char *s = ss;

	if (number < 0)
	{
		number = -number;
		*iterator += _putchar('-');
	}
	*_itoa(s, number, base) = '\0';
	*iterator += _putstring(s);
	*i = *i + 1;
}
