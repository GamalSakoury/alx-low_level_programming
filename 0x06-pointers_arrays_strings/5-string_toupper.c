#include "main.h"

/**
  * *string_toupper - A function that changes all lowercase to uppercase.
  * @n: parameter.
  *
  * Return: array.
  */

char *string_toupper(char *n)
{
	int c;

	c = 0;
	while (n[c])
	{
		if (n[c] >= 97 && n[c] <= 122)
			n[c] = n[c] - 32;
		c++;
	}

	return (n);
}
