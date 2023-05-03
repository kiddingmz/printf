#include "main.h"

/**
 * _putstring - print string
 *
 * @str: string
 *
 * Return: lenght
 */

unsigned int _putstring(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0' && str != NULL; i++)
		_putchar(str[i]);
	return (i);
}
