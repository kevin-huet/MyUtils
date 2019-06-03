/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my strlen
*/

#include "my.h"

int my_strlen(const char *str)
{
    size_t i = 0;
    while (str[i++]);
    return (i);
}