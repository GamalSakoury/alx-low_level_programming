#include "main.h"

/**
  * print_last_digit - return the lastdigit of an integer
  * @n: parameter that passed to the program
  * a variable var to print the last digit
  * Return: the last digit and change negative to pos..
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

