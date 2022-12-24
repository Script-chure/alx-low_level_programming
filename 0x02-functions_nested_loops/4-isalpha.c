#include "main.h"

/**
 * _isalpha - prints 1 for lower or upper case alphabets, else 0
 * @c: lower case alphabet
 *
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
