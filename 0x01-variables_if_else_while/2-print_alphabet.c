#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description - Print alphabets in lower case followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}

