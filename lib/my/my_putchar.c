/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** display a char in standard output
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
