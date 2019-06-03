/*
** EPITECH PROJECT, 2019
** f
** File description:
** f
*/

#include "include/my.h"

int my_strcmp(const char *str, const char *str2)
{
    while (*str != '\0' && *str2 != '\0' && *str == *str2) {
        str++;
        str2++;
    }
    return (*str - *str2);
}