#include "main.h"

/**
  * print_most_numbers - A function that prints nums from 0 to 9.
  * using for loop and if to except 2 and 4.
  */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}

	_putchar('\n');
}

