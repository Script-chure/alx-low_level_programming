#include <stdio.h>

/**
* main - Prints out the alphabet in lower case
*
* Return: Always 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		i++;
		putchar('\n');
	}
	return (0);
}
