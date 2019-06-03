/*
** EPITECH PROJECT, 2019
** lib
** File description:
** sort array
*/

#include "my.h"

static int arr_len(char **arr)
{
    int i = 0;
    if (arr == NULL) {
        return 0;
    }
    for (i = 0; arr[i] != NULL; i++);
    return i;
}

static void check_swap(char **elem1, char **elem2)
{
    char *tmp = NULL;
    if (my_strcmp(*elem1, *elem2) > 0) {
        tmp = *elem2;
        *elem2 = *elem1;
        *elem1 = tmp;
    }
}

void sort(char **arr)
{
    int i = 0;
    int j = 0;
    int len = arr_len(arr);
    if (len == 0)
        return;
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            check_swap(&arr[i], &arr[j]);
        }
    }
}