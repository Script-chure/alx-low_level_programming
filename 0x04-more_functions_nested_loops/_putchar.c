#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - prints out a character
 * @c: character
 *
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
