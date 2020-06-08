/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** find str in str
*/

#include <unistd.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (to_find[i] != 0)
        i++;
    while (*str != 0)
    {
        if (my_strncmp(str, to_find, i) == 0)
            return (str);
        str++;
    }

    return NULL;
}
