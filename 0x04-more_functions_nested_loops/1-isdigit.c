#include "main.h"

/**
  * _isdigit - A function that checks for a digit (0 through 9).
  * @c: the passing parameter.
  * checking if the argument is between (48 and 53).
  * else then it will be otherwise.
  * Return: 0 for otherwise and 1 if c is digit.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
