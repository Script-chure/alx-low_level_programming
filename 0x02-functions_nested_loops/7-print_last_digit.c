#include "main.h"

/**
 * print_last_digit - prints the last digit of n.
 * @n: number
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int ln;

	ln = n % 10;
	if (ln  < 0)
		ln *= -1;

	_putchar(ln + '0');
	return (ln);
}
