#include <stdlib.h>
#include "main.h"

/**
  * *string_nconcat -A function that concates two strings.
  * @s1: first string.
  * @s2: second string.
  * @n: number of bytes.
  *
  * Return: NULL or pointer.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len, size;

	i = 0;
	j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	ptr = malloc(sizeof(*ptr) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	for (len = 0; len < i; len++)
	{
		ptr[len] = s1[len];
	}

	if (n >= j)
	{
		for (size = 0; size < j; size++)
		{
			ptr[len] = s2[size];
			len++;
		}
	}
	else
	{
		for (size = 0; size < n; size++)
		{
			ptr[len] = s2[size];
			len++;
		}
	}
	ptr[len] = '\0';

	return (ptr);
}
