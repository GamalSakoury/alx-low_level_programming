#include "main.h"

/**
  * print_numbers - A function that prints nums from 0 to 9.
  * using for loop.
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int var;

		var = i + 48;
		_putchar(var);
	}
	_putchar('\n');
}
