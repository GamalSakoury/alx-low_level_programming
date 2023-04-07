#include "main.h"

/**
  * factorial -A function to calculate factorial.
  * @n: passing parameter.
  *
  * Return: 1 or -1 or n * factorial(n-1).
  */

int factorial(int n)
{
	if (n < -1)
	{
		return (-1);
	}
	else
	{
		if (n <= 1)
			return (1);
		return (n * factorial(n - 1));
	}
}
