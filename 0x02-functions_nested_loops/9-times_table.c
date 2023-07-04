#include "main.h"
/**
 * times_table - check description
 * Description: a function that prints the 9 times table, starting with 0
 * Return: Nothing.
 */
void times_table(void)

{
	int c, m, j;

	for (c = 0; c <= 9; c++)
	{
		for (m = 0; m <= 9; m++)
		{
			j = c * m;
			if ((j / 10) == 0)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(j + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				if (m == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
