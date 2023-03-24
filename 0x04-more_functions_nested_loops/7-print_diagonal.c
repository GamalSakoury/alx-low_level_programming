#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line in the terminal.
 * @n: parameter that is passed to the function num of times.
 * looping n times and with each iteration print _.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
