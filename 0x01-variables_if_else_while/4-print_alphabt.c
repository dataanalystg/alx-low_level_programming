#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)

{
	char m = 'a';

	while (m <= 'z')
	{
		if (m != 'e' && m != 'q')
		{
			putchar(m);
		}
		m++;
	}
	putchar('\n');
	return (0);
}
