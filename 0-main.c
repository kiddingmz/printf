#include "main.h"
#include <stdio.h>

/**
 * main - test printf function
 *
 * @argc: length params
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *arg[])
{
	int q;
	
	if (argc != 2)
	{
		printf("\nQuantidade de paramtetros errados\n");
		return (1);
	}

	q = _printf(arg[argc - argc + 1]);
	printf("Quantidade de caracteres: %d\n", q);
	return (0);
}
