#include "main.h"

/**
  * rev_string - A function that reverses a string.
  * @s: parameter passed.
  * Return: empty.
  */

void rev_string(char *s)
{
	int c, i, j;
	int swap;

	c = 0;
	while (s[c] != '\0')
		c++;
	i = 0;
	j = c - 1;
	if (c == 1)
	{
		_putchar('\n');
	}
	else
	{
		while (1)
		{
			swap = s[i];
			s[i] = s[j];
			s[j] = swap;
			i++;
			if (i == j)
				break;
			j--;
			if (i == j)
				break;
		}
}
