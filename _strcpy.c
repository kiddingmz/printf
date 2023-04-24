#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, const char *src)
{
	size_t i, n;

	n = _strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}
