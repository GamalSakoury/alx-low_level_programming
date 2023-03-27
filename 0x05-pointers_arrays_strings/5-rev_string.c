#include "main.h"

/**
  * rev_string - A function that reverses a string.
  * @s: parameter.
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
	while (i != j)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
		i++;
		j--;
	}
}
