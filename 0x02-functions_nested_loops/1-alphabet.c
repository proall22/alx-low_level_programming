#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char lCase;

	while (newline <= 9)
	{
		for (lCase = 'a'; lCase <= 'z'; lCase++)
		{
			_putchar(lCase);
		}
		_putchar('\n');
		newline++;
	}
}
