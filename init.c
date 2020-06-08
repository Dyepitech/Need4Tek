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

t_n4s *init_struct(void)
{
    t_n4s *nfs;
    nfs = malloc(sizeof(t_n4s) * 1);

    nfs->buffer = NULL;
    nfs->tab = NULL;
    nfs->value = 0;
    nfs->dir_left = 0;
    nfs->dir_right = 0;
    nfs->total = 0;
    return (nfs);
}

void in_loop(t_n4s *nfs)
{
    my_putstr(GIL);
    nfs->buffer = get_next_line(0);
    first_line(nfs->buffer, ':');
    nfs->buffer = get_info_lidar(nfs);
    nfs->tab = my_strtok(nfs->buffer, ":");
    nfs->value = atof(nfs->tab[15]);
}

int ia(void)
{
    t_n4s *nfs;
    nfs = init_struct();

    while (1){
        in_loop(nfs);
        if (recept_car_val(nfs) == 1)
            break;
        in_loop(nfs);
        if (choose_dir(nfs) == 1)
            break;
    }
    return (0);
}
