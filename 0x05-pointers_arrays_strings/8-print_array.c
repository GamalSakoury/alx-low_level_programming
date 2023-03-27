#include "main.h"
#include <stdio.h>

/**
  * print_array - A function that prints an array.
  * @a: parameter.
  * @n: second parameter for the len of array.
  * Return: empty.
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
