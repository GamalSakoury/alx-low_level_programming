#include "main.h"

/**
  * *_strcat - A function that concatinate two strings.
  * @dest: parameter that is going to be appended.
  * @src: source parameter.
  *
  * Return: dest.
  */

char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
		c++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
