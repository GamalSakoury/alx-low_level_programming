#include "main.h"

/**
  * jack_bauer - prints every minute of the day of Jack Bauer
  * by using nested while loops
  */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int w;

	i = j = k = w = 0;
	while (1)
	{
		_putchar(i + 48);
		_putchar(j + 48);
		_putchar(':');
		_putchar(k + 48);
		_putchar(w + 48);
		_putchar('\n');
		if (w == 9)
		{
			w = 0;
			k = k + 1;
		}
		if (k == 5)
		{
			k = 0;
			j = j + 1;
		}
		if (j == 3)
		{
			j = 0;
			i = i + 1;
		}
		if (i == 2)
		{
			break;
		}
		w++;
	}
}
