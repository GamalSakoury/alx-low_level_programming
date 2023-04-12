#include <stdlib.h>
#include "main.h"

/**
  * *_strdup -A function that duplicates a string.
  * @str: string.
  *
  * Return: NULL or duplicate string.
  */

char *_strdup(char *str)
{
	char *string;
	unsigned int size;
	unsigned int i;

	size = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
	{
		size++;
	}

	string = (char *) malloc((size + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		string[i] = str[i];
	}

	return (string);
}
