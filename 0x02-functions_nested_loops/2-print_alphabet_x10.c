#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{

	char lc;
	int i = 0;

	while (i <= 9)
	{
	for (lc = 'a'; lc <= 'z'; lc++)
	{
	_putchar(lc);
	}
	_putchar('\n');
	i++;
	}
}
