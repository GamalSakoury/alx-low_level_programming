#include <stdio.h>

/**
  * main -Check the code.
  *
  * Return: 0 always.
  */

int main(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s = s + i;
		}
	}
	printf("%d\n", s);
}
