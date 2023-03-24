#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: parameter that is passed to the function num of times.
 * looping n times and with each iteration print _.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
