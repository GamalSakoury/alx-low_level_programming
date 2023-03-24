#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @size: parameter that is passed to the function size of the sqaures.
 * using nested for loops.
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
