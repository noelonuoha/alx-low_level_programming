#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description - Print alphabets in lower case followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

