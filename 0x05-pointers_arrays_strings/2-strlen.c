#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * RETURN: Lenght
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
