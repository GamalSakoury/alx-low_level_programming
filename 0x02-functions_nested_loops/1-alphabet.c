#include "main.h"
/**
 * print_alphabet - using for loop to iterate from 97 til 122
 * then print using _putchar
 * Return: always 0
 */

void print_alphabet(void)
{
	int counter;

	for (counter = 97; counter < 123; counter++)
	{
		char ch;

		ch = counter;
		_putchar(ch);
	}
	_putchar('\n');
}
