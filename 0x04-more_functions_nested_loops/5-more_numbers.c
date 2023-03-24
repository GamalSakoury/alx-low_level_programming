#include "main.h"

/**
  * more_numbers - A function that prints 10 times till 14.
  * using nested for loop and if.
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}

