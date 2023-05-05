#include <stdio.h>
#include <stdlib.h>

int convert(int i)
{
	int j;

	while (i != 0)
	{
		j = i / 10;
		putchar(j + '0');
		i = j;
	}
	return (i);
}

int main(void)
{
	int y = convert(12345);

	printf("%d", y);
	return (0);
}
