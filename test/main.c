#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	char c[] = "Isidro Bata";
	i = _printf("\nOI mundo como esta\n%s\n\tEstado: %c\n",c, 'S');
	j = printf("\nOI mundo como esta\n%s\n\tEstado: %c\n", c, 'S');

	printf("\n[%d]\n[%d]\n", i, j);

	i = _printf("%K\n");
	j = printf("%K\n");

	printf("\n[%d]\n[%d]\n", i, j);
	return (0);
}
