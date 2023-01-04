#include "main.h"

/**
 * _abs - prints absolute value of int
 * @n: integar being checked
 *
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	else
		_putchar(n);
	return (n);
}
