#include"main.h"

/**
  * _puts -A function that prints a string to display.
  * @str: parameter passed to function.
  *
  * Return: empty.
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
