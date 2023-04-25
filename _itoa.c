#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _itoa_ - converte recursion
 *
 * @dest: string
 * @i: number
 *
 * Return: string
 */

char *_itoa_(char *dest, int i)
{
	if (i <= -10)
		dest = _itoa_(dest, i / 10);
	*dest++ = '0' - i % 10;
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

char *_itoa(char *dest, int i)
{
	char *s = dest;

	if (i < 0)
		*s++ = '-';
	else
		i = -i;
	*_itoa_(s, i) = '\0';
	return (dest);
}
