#include "main.h"
/**
 * print_alphabet_x10 - using nested for loops.
 * to print it 10 times I will use for loop.
 * put the print_alphabet implemenation inside it.
 * then print using _putchar
 */

void print_alphabet_x10(void)
{
	int i;
	int counter;

	for (i = 0; i < 10; i++)
	{
		for (counter = 97; counter < 123; counter++)
		{
			char ch;

			ch = counter;
			_putchar(ch);
		}
	_putchar('\n');

	}
}
