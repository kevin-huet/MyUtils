/*
** EPITECH PROJECT, 2019
** lib
** File description:
** cleanstr
*/

#include "my.h"

void clean_end_str(char *str)
{
    int i = my_strlen(str) - 2;
    while (str[i] == ' ' || str[i] == '\t') {
        str[i] = '\0';
        i--;
    }
    return;
}