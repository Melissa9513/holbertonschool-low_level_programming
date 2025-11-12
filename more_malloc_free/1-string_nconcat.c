#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to the newly allocated memory containing s1 + first n bytes of s2,
 *         or NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, len1 = 0, len2 = 0;
    char *concat;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Find lengths of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* If n >= len2, use the full s2 */
    if (n >= len2)
        n = len2;

    /* Allocate memory for s1 + n bytes of s2 + null terminator */
    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* Copy n bytes of s2 */
    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];

    concat[i + j] = '\0';

    return (concat);
}
