#include "main.h"

/**
  * _abs - return the absolute of an integer
  * @n: parameter that checked
  * Return: n for pos and 0 for zero and -n.
  */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * -1);
}

