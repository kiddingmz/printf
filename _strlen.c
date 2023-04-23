#include "main.h"

int _strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
