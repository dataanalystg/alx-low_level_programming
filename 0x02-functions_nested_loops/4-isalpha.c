#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 * @n: alpabet to check for
 * Return: 1 if n is a letter, 0 otherwise
 */
int _isalpha(int n)

{
	return ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'));
}
