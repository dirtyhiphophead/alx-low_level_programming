#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: The number of times table (0 < n <= 15)
 *
 * Description: This function takes a positive integer n and prints the n times
 * table, starting with 0 and going up to n. The output is aligned in columns
 * with proper spacing.
 *
 * Return: No return value (void)
 */
	void print_times_table(int n)
	{
		int i, j, k;

		if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = j * i;
					if (j == 0)
					{
						_putchar(k + '0');
					} else if (k < 10 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					} else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					} else if (k >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
