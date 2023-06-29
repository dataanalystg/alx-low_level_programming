#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 * Description: prints alphabet in lowercase
 * main - Entry point
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char  t;

	for (t = 97; t <= 122; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
