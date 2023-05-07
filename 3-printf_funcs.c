#include "main.h"

/**
 * _itoa_u - unsigned int to string
 *
 * @s: string
 * @number:  number to convert
 * @base: base
 * @c: char
 *
 * Return: string
 */

char *_itoa_u(char *s, unsigned long int number, unsigned int base, char c)
{
	unsigned long int q;

	if (number >= base)
	{
		q = number % base;
		if (base == 16 && q > 10 && c == 'h')
			*s++ = 87 + q;
		else if(base == 16 && q > 10 && c == 'H')
			*s++ = 55 + q;
		s = _itoa_u(s, number / base, base, c);
	}
	*s++ = '0' + number % base;
	return (s);
}

/**
 * print_int_h - print lower hexadecimal
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int_h(unsigned int number, unsigned int *iterator, unsigned int *i, unsigned int base)
{
	char ss[1024];
	char *s = ss;
	char p[1024];
	int ii, j, c, k;

	*_itoa_u(s, number, base, 'h') = '\0';
	
	ii = j = 0;
	while (s[ii])
	{
		if (s[ii] == '?')
			j++;
		ii++;
	}
	
	for (c = j, k = 0; c < ii - j; c++, k++)
		p[k] = s[c];
	ii = ii - j;
	j--;
	while (s[ii])
	{
		p[k++] = s[j--];
		ii++;
	}
	p[k] = '\0';
	*iterator += _putstring(p);
	*i = *i + 1;
}

/**
 * print_int_H - print upper hexadecimal
 *
 * @number: number to print
 * @iterator: iterator
 * @i: int
 * @base: base
 *
 * Return: nothing
 */

void print_int_H(unsigned int number, unsigned int *iterator, unsigned int *i, unsigned int base)
{
	char ss[1024];
	char *s = ss;
	char p[1024];
	int ii, j, c, k;

	*_itoa_u(s, number, base, 'H') = '\0';
	
	ii = j = 0;
	while (s[ii])
	{
		if (s[ii] == '?')
			j++;
		ii++;
	}
	
	for (c = j, k = 0; c < ii - j; c++, k++)
		p[k] = s[c];
	ii = ii - j;
	j--;
	while (s[ii])
	{
		p[k++] = s[j--];
		ii++;
	}
	p[k] = '\0';
	*iterator += _putstring(p);
	*i = *i + 1;
}


