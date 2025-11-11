#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if memory is insufficient
 * or if str is NULL
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    /* Find length of the string */
    for (len = 0; str[len]; len++)
        ;

    /* Allocate memory for the duplicate string (+1 for the null terminator) */
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    /* Copy the string */
    for (i = 0; i < len; i++)
        dup[i] = str[i];

    dup[i] = '\0'; /* Null-terminate the duplicate string */

    return (dup);
}
