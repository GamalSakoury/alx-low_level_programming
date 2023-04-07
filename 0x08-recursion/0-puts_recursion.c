#include "main.h"

/**
  * _puts_recursion -A function that prints a string.
  * @s: array paramter.
  *
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
