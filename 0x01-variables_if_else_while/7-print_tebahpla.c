#include <unistd.h>
#include <stdio.h>
/**
 * main - print lower case alphabets in reverse, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
