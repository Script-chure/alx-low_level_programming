#include <stdio.h>

/**
 * main - Prints the alphabet in lower case letters,
 * with the exception of 'e' and 'q'.
 *
 * Return: always 0(success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
			c++;
		if (c == 'q')
			c++;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
