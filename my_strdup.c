/*
** EPITECH PROJECT, 2019
** lib
** File description:
** strdup
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *new_str = malloc(sizeof(char) * my_strlen(str) + 1);
    for (size_t i = 0; str[i]; i++)
        new_str[i] = str[i];
    new_str[my_strlen(str) - 1] = 0;
    return (new_str);
}