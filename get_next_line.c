/*
** EPITECH PROJECT, 2018
** f
** File description:
** f
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

static int check_return(char *str)
{
    int i = 0;

    if (str != NULL) {
        for (;str[i]; i++) {
            if (str[i] == '\n')
                return (1);
        }
    } else
        return (1);
    return (0);
}

static char *change_size(char *str, char temp[], int size)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (size + 1));

    if (str2 != NULL) {
        for (;str != NULL && str[i] != '\0'; i++)
            str2[i] = str[i];
        for (;temp[j] != '\0' && temp[j] != '\n';)
                str2[i++] = temp[j++];
        str2[i++] = temp[j];
        str2[i] = '\0';
        free(str);
    } else
        return (NULL);
    return (str2);
}

static void change_memory(char *str)
{
    int i = 0;

    for (;str[0] != '\n' && str[1] != '\0';) {
        for (;str[i] != '\0'; i++)
            str[i] = str[i + 1];
        i = 0;
    }
    for (;str[i]; i++)
        str[i] = str[i + 1];
}

static char *check_str(char *str, int i)
{
    if (str != NULL) {
        for (;str[i] != '\n' && str[i] != '\0'; i++);
        str[i] = '\0';
        return (str);
    } else
        return (NULL);
}

char *get_next_line(int fd)
{
    int i = 0;
    int size = READ_SIZE;
    int check = 0;
    char *str = NULL;
    static char temp[READ_SIZE] = {'\0'};
    int rd = 0;
    str = change_size(str, temp, size);
    change_memory(temp);
    check = check_return(str);
    for (;check == 0;) {
        rd = read(fd, temp, READ_SIZE);
        if (rd == 0)
            return (NULL);
        size = size + rd;
        str = change_size(str, temp, size);
        change_memory(temp);
        check = check_return(str);
    }
    return (check_str(str, i));
}
