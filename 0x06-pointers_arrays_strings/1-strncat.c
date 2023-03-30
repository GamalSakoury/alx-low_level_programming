#include "main.h"

/**
  * *_strncat - A function that concatinate two strings.
  * @dest: parameter that is going to be appended.
  * @src: source parameter.
  * @n: number parameter.
  *
  * Return: dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
		c++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[c] = src[i];
		c++;
	}

	return (dest);
}
