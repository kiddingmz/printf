#include "main.h"

/**
 * _lenchar - length of char
 *
 * @dest: destine
 * @t: pos
 * @src: char
 *
 * Return: unsigned int
 */

size_t _lenchar(const char *dest, size_t t, in src)
{
	size_t i;

	i = 0;
	while (dest[t] != '\0')
	{
		if (src == dest[t] && src == dest[t + 1])
			i++;
		t++;
	}
	return (i);
}

