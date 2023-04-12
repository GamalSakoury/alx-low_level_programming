#include <stdlib.h>
#include "main.h"

/**
  * *str_concat -A function that concate two strings.
  * @s1: source string.
  * @s2: string that is about to concatinate.
  *
  * Return: NULL or duplicate string.
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2;
	unsigned int i, j;
	char *p;

	size1 = 0;
	size2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[size1])
			size1++;
	}
	if (s2 != NULL)
	{
		while (s2[size2])
			size2++;
	}

	p = (char *) malloc((size1 + size2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	for (j = 0; j < size2; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';

	return (p);
}
