#include "main.h"

/**
 * _itoa_ - converte recursion
 *
 * @dest: string
 * @i: number
 *
 * Return: string
 */

char *_itoa_(char *dest, int i, int base)
{
	if (i <= -base)
		dest = _itoa_(dest, i / base, base);
	*dest++ = '0' - i % base;
	return (dest);
}

/**
 * _itoa - return conversion
 *
 * @dest: string
 * @i: number
 *
 * Return: string
 */

char *_itoa(char *dest, int i, int base)
{
	char *s = dest;

	if (i < 0)
		*s++ = '-';
	else
		i = -i;
	*_itoa_(s, i, base) = '\0';
	return (dest);
}
