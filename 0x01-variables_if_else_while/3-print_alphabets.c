#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	int t;

	for (t = 'a'; t <= 'z'; t++)
		putchar(t);
	for (t = 'A'; t <= 'Z'; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
