#include "main.h"

/**
 * _isupper - checks if character is Uppercese
 * @c: character
 *
 * Return: 1 if c is upper, else 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
