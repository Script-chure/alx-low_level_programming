#include "main.h"

/**
 * print_alphabet_x10 - Prints out the alphabet in lower case
 * 10 times
 * Return: Always void.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
