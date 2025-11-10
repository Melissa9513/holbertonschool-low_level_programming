#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de chars et l'initialise avec un char spécifique
 * @size: taille du tableau à créer
 * @c: caractère utilisé pour initialiser le tableau
 *
 * Return: pointeur vers le tableau, ou NULL si échec ou size = 0
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = malloc(sizeof(char) * size);
    if (array == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
