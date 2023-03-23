#include "main.h"

/**
  * times_table -  a function that prints the 9 times table.
  * starting with zero.
  * using nested loops
  */

void times_table(void)
{
	int i;
	int j;
	int z;
	int u;
	int d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				putchar(44);
				putchar(32);
				putchar(d + '0');
				putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					putchar(44);
					putchar(32);
					putchar(32);
				}
				putchar(z + '0');
			}
		}
		putchar('\n');
	}
}
