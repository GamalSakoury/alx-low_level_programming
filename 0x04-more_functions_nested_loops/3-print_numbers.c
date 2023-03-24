#include "main.h"

/**
  * print_numbers - A function that prints nums from 0 to 9.
  * using for loop.
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);

	_putchar('\n');
}
