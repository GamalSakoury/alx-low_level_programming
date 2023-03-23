#include "main.h"

/**
  * _islower - accept one parameter.
  * @c: is an integer charc to be checked
  * checking is the parameter c between 97 and 122.
  * if yes then return 1.
  * else return 0.
  * Return: 1 (success) lowercases and 0 for else
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
