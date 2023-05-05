#include "main.h"

/**
 * print_char - print char
 *
 * @c: char
 * @iterator: iterator
 *
 * Return: nothing
 */

void print_char(int c, unsigned int *iterator)
{
	*iterator += _putchar(c);
}

/**
 * print_char_iter - print char
 *
 * @c: char
 * @iterator: iterator
 * @i: increment
 *
 * Return: nothing
 */

void print_char_iter(int c, unsigned int *iterator, unsigned int *i)
{
	*iterator += _putchar(c);
	*i = *i + 1;
}

/**
 * print_string - print string
 *
 * @s: string
 * @iterator: iterator
 * @i: increment
 *
 * Return: nothing
 */

void print_string(const char *s, unsigned int *iterator, unsigned int *i)
{
	if (s == NULL || s == (void *)0)
		*iterator += _putstring("(null)");
	else
		*iterator += _putstring(s);
	*i = *i + 1;
}
