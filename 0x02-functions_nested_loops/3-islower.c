#include "main.h"

/**
 * _islower - prints 1 for lower case alphabets, else 0
 * @c: lower case alphabet
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
