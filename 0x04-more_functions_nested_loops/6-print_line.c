#include "main.h"
/**
 * print_line - print a straight line in the terminal
 * @n: number of lines
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
