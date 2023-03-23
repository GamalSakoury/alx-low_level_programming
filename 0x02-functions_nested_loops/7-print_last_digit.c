#include "main.h"

/**
  * _print_last_digit - return the lastdigit of an integer
  * @n: parameter that passed to the program
  * Return: n for pos and 0 for zero and -n.
  */
int print_last_digit(int n)
{
	int var;

	if (n >= 0)
	{
		var = (n % 10) + 48;
		_putchar(var);
		return (n % 10);
	}
	else
	{
		var = (n % 10) * -1 + 48;
		_putchar(var);
		return ((n % 10) * -1);
	}
}

