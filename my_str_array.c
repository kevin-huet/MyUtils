/*
** EPITECH PROJECT, 2019
** my str to word array
** File description:
** hehehe
*/

#include "my.h"

static int check_separator(char *str, char c)
{
    int nb = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            nb++;
    }
    return (nb + 1);
}

static int check_nb_char(char *str, char c)
{
    int nb = 0;
    int i = 0;
    for (;str[i]; i++) {
        if (str[i] != c)
            nb++;
        else {
            break;
        }
    }
    return (nb);
}

char **str_array(char *str, char c)
{
    char **result = NULL;
    int count = 0;
    int count_char = 0;
    int k = 0;
    if (str == NULL)
        return (NULL);
    count = check_separator(str, c);
    result = malloc(sizeof(char *) * (count + 1));
    for (int i = 0; i != count + 1; i++) {
        count_char = check_nb_char(&str[k], c);
        result[i] = malloc(sizeof(char) * count_char + 1);
        for (int j = 0; j != count_char; j++)
            result[i][j] = str[k++];
        k++;
        result[i][count_char] = 0;
    }
    result[count] = 0;
    return (result);
}