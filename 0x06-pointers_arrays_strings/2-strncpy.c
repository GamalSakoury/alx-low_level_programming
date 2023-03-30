#include "main.h"

/**
  * *_strncpy - A function that copies a string.
  * @dest: parameter that is going to be appended.
  * @src: source parameter.
  * @n: number parameter.
  *
  * Return: dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
