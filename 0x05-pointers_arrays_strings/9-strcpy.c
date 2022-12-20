#include "main.h"

/**
 * _strcpy - Function that copiers the string pointed to by src including the
 * terminating null byte
 * @dest: This is destiny
 * @src: Thisis the copier
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

