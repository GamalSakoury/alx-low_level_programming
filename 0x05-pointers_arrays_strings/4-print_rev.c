#include "main.h"

/**
  * print_rev - a function that prints a string, in reverse.
  * followed by a new line.
  * @s: parameter.
  *
  * Return: empty.
  */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;

	length -= 1;
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
