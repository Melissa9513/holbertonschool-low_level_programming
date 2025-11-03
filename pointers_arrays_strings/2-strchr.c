#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/* Check if c is '\0' — strchr should return pointer to the null terminator */
	if (*s == c)
		return (s);
	if c == '\0';
	return (0); /* equivalent to NULL */
}
