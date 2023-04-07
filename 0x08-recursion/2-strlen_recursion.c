#include "main.h"

/**
  * _strlen_recursion -A function to calculate the length of string.
  * @s: string.
  *
  * Return: length and 0.
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s = s + 1;
	return (1 + _strlen_recursion(s));
}
