#include "main.h"

/**
  * _isalpha - function that checks for alpha char
  * @c: checking parameter
  * using if and else if condition to check
  * first checking if it's lowercase (97-122)
  * else if checking it's uppercase (65-90)
  * otherwise nothing
  * Return: 1 for letter and 0 for otherwise
  */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
