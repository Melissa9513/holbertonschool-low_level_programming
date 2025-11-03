#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        int found = 0;

        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
            return (i);
    }

    return (i);
}
