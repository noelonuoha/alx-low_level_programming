#include <main.h>
/**
 * _memset - Write a function that fills memory with a constant byte.
 * @n: n byte of the memory pointed by s
 * @s: memory area
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
