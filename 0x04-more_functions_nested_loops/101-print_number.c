#include "main.h"
/**
 * print_number - print an integer
 * @n: input integer
 */
void print_number(int n)
{
	insigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}