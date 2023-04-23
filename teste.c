#include <stdarg.h>
#include <stdio.h>

int max(int num, ...)
{
	int c;
	va_list arg;

	va_start(arg, num);
	
	for (c = 0; i < num; i++)
	{
		int x = va_arg(arg, int);
		printf("x: %d\n", x);
	}

	va_end(arg);

	return (0);
}

int main(void)
{
	max(1, 2, 3, 4, 5);
	max(10, 11, 12, 13, 14);

	return (0);
}
