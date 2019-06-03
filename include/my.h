/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define READ_SIZE 1
#include <stdarg.h>

int my_put_nbr(int nb);
void my_printf(char *str, ...);
char **my_realloc_array(char **ptr, size_t size);
int my_strlen(const char *str);
void my_putchar(char c);
void my_putstr(char *str);
char *get_next_line(int fd);
char *my_strdup(char *str);
char **my_str_array(char *str, char c);
char *my_realloc(char *ptr, size_t size);
char *my_strcat(char *dest, char *str);
int my_strcmp(const char *str, const char *str2);
void sort(char **arr);
void clean_end_str(char *str);
