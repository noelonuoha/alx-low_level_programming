#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description - print all single digits of base 10 starting from 0
 * Return: Alway 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar("%d", a);
	}
	putchar('\n');
	return (0);
}
