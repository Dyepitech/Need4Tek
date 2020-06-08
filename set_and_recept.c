/*
** EPITECH PROJECT, 2020
** AIA_n4s_bootstrap_2019
** File description:
** main
*/

#include "ai.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_alpha(char c)
{
    if (c == 0)
        return (1);
    if ((c >= '0' && c <= '9') || c == ':' || c == '.')
        return (0);
    return (1);
}

int setcar_speed(char *str)
{
    if (str == NULL)
        return (84);
    my_putstr(str);
    str = get_next_line(0);
    if (str != NULL)
        if (first_line(str, ':') != 0)
            return (1);
    return (0);
}

int set_dir(float i, char *speed)
{
    my_putstr(WHEEL);
    if (i < 0.0)
        my_putchar('-');
    my_putstr(speed);
    speed = get_next_line(0);
    if (first_line(speed, ':') != 0)
        return (1);
    return (0);
}

int recept_car2(t_n4s *nfs, int i)
{
    if (nfs->value >= 600)
        i = setcar_speed(car_speed[3]);
    else if (nfs->value >= 400)
        i = setcar_speed(car_speed[4]);
    else
        i = setcar_speed(car_speed[5]);
    return (i);
}

int recept_car_val(t_n4s *nfs)
{
    int i = 0;

    if (nfs->value >= 2000)
        i = setcar_speed(car_speed[0]);
    else if (nfs->value >= 1500)
        i = setcar_speed(car_speed[1]);
    else if (nfs->value >= 1000)
        i = setcar_speed(car_speed[2]);
    else if (nfs->value >= 600)
        i = setcar_speed(car_speed[3]);
    else if (nfs->value >= 400)
        i = setcar_speed(car_speed[4]);
    else
        i = setcar_speed(car_speed[5]);
    return (i);
}
