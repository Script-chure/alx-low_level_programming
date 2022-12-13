#include <stdio.h>

/**
 * main - Prints the alphabet in lower case letters
 *
 * Return: always 0(success)
 */
int main(void)
{
	int c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
