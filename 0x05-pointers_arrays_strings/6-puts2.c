#include "main.h"

/**
  * puts2 - A function that prints every other character of a string.
  * @str: parameter.
  * Return: empty.
  */

void puts2(char *str)
{
	int c, i;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
