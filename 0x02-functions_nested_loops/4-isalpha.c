#include "main.h"
/**
 * _isalpha - check for char alphabets
 * @c: the char to be checked
 *
 * Return: 1 if char is lower or upper case, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
