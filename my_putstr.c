/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my putstr
*/

#include "my.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str) - 1);
}
