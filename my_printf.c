/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my printf
*/

#include "my.h"
#include <stdarg.h>

void my_printf(char *str, ...)
{
    va_list va;
    va_start(va, str);
    for (size_t i = 0; str[i];) {
        if (str[i] == '%' && str[i + 1] == 's') {
            my_putstr(va_arg(va, char *));
            i += 2;
        } else if (str[i] == '%' && str[i + 1] == 'd') {
            my_put_nbr(va_arg(va, int));
            i += 2;
        }
        else
            my_putchar(str[i++]);
    }
    va_end(va);
}