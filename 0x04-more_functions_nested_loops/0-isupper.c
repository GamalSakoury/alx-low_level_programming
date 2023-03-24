#include "main.h"

/**
  * _isupper - A  function that checks for uppercase character.
  * @c: the passing parameter.
  * checking if the argument is uppercase.
  * else then it will be lowercase or otherwise.
  * Return: 0 for otherwise and 1 for uppercase.
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
