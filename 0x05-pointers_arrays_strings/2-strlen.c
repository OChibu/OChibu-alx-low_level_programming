#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: char inputs
 * Return: length of the input string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
