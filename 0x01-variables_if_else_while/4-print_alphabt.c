#include <stdio.h>
/**
 * main - print lower case alphabets except q and e, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}
	
	putchar("\n");

        return (0);
}

