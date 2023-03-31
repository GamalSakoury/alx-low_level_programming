#include "main.h"

/**
  * reverse_array - A function that reverses the content of an array.
  * @a: array.
  * @n: the number of elements of the array.
  *
  * Return: empty.
  */

void reverse_array(int *a, int n)
{
	int i, j, swape;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		if (i >= j)
			break;
		swape = a[i];
		a[i] = a[j];
		a[j] = swape;
		i++;
		j--;
	}
}
