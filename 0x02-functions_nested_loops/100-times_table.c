#include "main.h"

/**
  * print_times_table - a function that prints the n times table, starting with 0.
  * @n: passed parameter. 
  * using for loop.
  * Return: empty.
  */
void print_times_table(int n)
{
	int i;
	int j;
	int num1, num2, num3;
	int var;

	if (n > 15 || n < 0);
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				var = i * j;
				if (var <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(var + 48);
					if (j != n)
					{
						_putchar(',');
					}
				}
				else if (var > 9 && var < 100)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((var / 10) + 48);
					_putchar((var % 10) + 48);
					if (j != n)
					{
						_putchar(',');
					}
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
					}
					num1 = var % 10;
					num2 = (var / 10) % 10;
					num3 = var / 100;
					_putchar(num3 + 48);
					_putchar(num2 + 48);
					_putchar(num1 + 48);
					if (j != n)
					{
						_putchar(',');
					}
				}
			}
			_putchar('\n');
		}
	}
}
