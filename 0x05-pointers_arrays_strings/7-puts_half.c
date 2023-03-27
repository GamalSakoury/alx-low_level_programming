#include "main.h"

/**
  * puts_half - A function that prints half of a string.
  * @str: parameter.
  * Return: empty.
  */

void puts_half(char *str)
{
	int c, i;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
		i = c / 2;
	else
		i = (c - 1) / 2;
	for (; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
