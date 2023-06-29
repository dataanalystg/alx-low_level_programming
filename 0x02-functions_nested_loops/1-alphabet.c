#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 * Description: prints alphabet in lowercase
 * main - Entry point
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
