#include "main.h"

/**
 * _charcpy - copy character
 *
 * @dest: pointer destine
 * @src: source
 *
 * Return: string
 */

char *_charcpy(char *dest, const char src)
{
	size_t d;

	d = _strlen(dest);
	dest[d] = src;
	dest[++d] = '\0';

	return (dest);
}
