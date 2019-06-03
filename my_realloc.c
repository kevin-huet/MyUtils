/*
** EPITECH PROJECT, 2019
** lib
** File description:
** realloc
*/

#include "my.h"

char **my_realloc_array(char **ptr, size_t size)
{
    char **new_ptr = NULL;
    if (ptr == NULL)
        return (NULL);
    new_ptr = malloc(sizeof(char *) * size + 1);
    for (size_t i = 0; i < size + 1; i++)
        new_ptr[i] = ptr[i];
    free(ptr);
    return (new_ptr);
}

char *my_realloc(char *ptr, size_t size)
{
    char *new_ptr = NULL;
    if (ptr == NULL)
        return (NULL);
    new_ptr = malloc(sizeof(void *) * size + 1);
    for (size_t i = 0; i < size; i++)
        new_ptr[i] = ptr[i];
    new_ptr[size] = 0;
    free(ptr);
    return (new_ptr);
}