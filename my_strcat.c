/*
** EPITECH PROJECT, 2019
** my lib
** File description:
** strcat
*/

#include "my.h"

char *my_strcat(char *dest, char *str)
{
    char *result = malloc(sizeof(char) + my_strlen(dest) + my_strlen(str) + 1);
    size_t j = 0;
    for (size_t i = 0; dest[i]; i++, j++)
        result[j] = dest[i];
    for (size_t i = 0; str[i]; i++, j++)
        result[j] = str[i];
    result[j] = 0;
    return (result);
}
