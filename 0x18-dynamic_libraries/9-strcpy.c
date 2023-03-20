#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *            including the terminating null byte (\0)
 *@dest: A buffer to copy the string to.
 *@src: A source string to cpoy.
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}

