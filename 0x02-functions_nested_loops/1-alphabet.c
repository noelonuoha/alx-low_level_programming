#include "main.h"
/**
 * print_alphabet - print alphabet in lower case followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
