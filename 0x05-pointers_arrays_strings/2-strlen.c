#include"main.h"

/**
  * _strlen -A function that returns the length of a string.
  * @s: parameter passed to function.
  *
  * Return: counter lenght of the string.
  */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s++)
	{
		counter++;
	}

	return (counter);
}
