#include <stdlib.h>
#include "main.h"

/**
  * *create_array -A function that creates an array of chars.
  * @size: size of the array.
  * @c: character parameter.
  *
  * Return: array or NULL.
  */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;
		char *array;

		array = (char *) malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		if (array == NULL)
			return (NULL);
		else
			array[i] = '\0';
			return (array);
	}
}
