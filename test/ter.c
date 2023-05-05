#include <stdio.h>
#include <stdlib.h>

void change(int *i)
{
	*i *= 10;
}

int main(void)
{
	int j;

	j = 10;
	printf("Before: %d\n", j);
	change(&j);
	printf("After: %d\n", j);

	return (0);
}
