#include "main.h"

/**
  * _pow_recursion -A function rasising x to the power y.
  * @x: number.
  * @y: raising power.
  *
  * Return: 1 or -1 or results.
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 1)
		{
			return (x);
		}
		else if (y == 0)
		{
			return (1);
		}
		else
		{
			y = y - 1;
			return (x * _pow_recursion(x, y));
		}
	}
}
