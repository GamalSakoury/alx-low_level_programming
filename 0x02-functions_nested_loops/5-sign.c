#include "main.h"

/**
  * print_sign - prints the sign of the number
  * @n: the checking parameter
  * by using if conditions to check
  * prints the sign
  *
  * Return: 1 greater, 0 zero, -1 less
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
