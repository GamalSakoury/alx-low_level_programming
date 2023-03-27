#include"main.h"

/**
  * swap_int -A function that swaps the vals of two integers.
  * @a: first para.
  * @b: second para.
  *
  * Return: empty.
  */

void swap_int(int *a, int *b)
{
	int swape;

	swape = *a;
	*a = *b;
	*b = swape;
}
