#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int j, i;

	for (j = 0; j < 100; j++)
	{
		for (i = 0; i < 100; i++)
		{
			if (j < i)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (j != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


