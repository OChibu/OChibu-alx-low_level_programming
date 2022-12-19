#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string input
 * Return: string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
