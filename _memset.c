#include "main.h"

/**
 * _memset - initialize memory
 *
 * @buffer: string
 * @c: character
 * @size: size
 *
 * Return: nothing
 */

void _memset(char *buffer, int c, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		buffer[i] = (char)c;
}
