#include <stdio.h>

/**
 * main - Prints the alphabet in lower case letters
 * then again in upper case letters
 *
 * Return: always gives the value of 0 (success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
