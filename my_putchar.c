/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}