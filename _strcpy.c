#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string
 *
 * @dest: destine
 * @src: source
 *
 * Return: string
 */

char *_strcpy(char *dest, const char *src)
{
	size_t i, n, d;

	d = _strlen(dest);
	n = _strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d++] = src[i];
	for (; i < n; i++)
		dest[d] = '\0';
	return (dest);
}
