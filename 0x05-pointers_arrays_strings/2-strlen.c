#include "main.h"
/**
 * _strlen - write a function that returns length of a string
 * @s: the string
 * Description: this will return length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
