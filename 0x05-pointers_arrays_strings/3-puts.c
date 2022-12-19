#include "main.h"

/**
 * _puts - a function that prints a string to stdout followed by a new line
 * @str: the string
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
