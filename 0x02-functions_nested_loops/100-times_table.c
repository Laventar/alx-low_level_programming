#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: number of the times table
 * Return: 0 Always success
 */
void print_times_table(int n)
{
	int b, c, d;

	if (n >= 0 && n <= 15)
	{
		for (b = 0, b <= n; b++;)
		{
			for (c = 0, c <= n; c++;)
			{
				d = c * b;
				if (c == 0)
				{
					_putchar(d + '0');
				} else if (d < 10 && c != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				} else if (d >= 10 && d < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				} else if (d >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
