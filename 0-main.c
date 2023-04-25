#include <stdarg.h>
#include "main.h"

/**
 * main - test printf function
 *
 * @argc: length params
 * @argv: array
 *
 * Return: 0
 */

int main(void)
{
	_printf("Ano novo: %d\nnome: %s\nestado: %c", 2023, "Isidro Bata", 's');
	return (0);
}
