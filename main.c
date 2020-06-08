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

int choose_dir(t_n4s *nfs)
{
    int	i;

    nfs->dir_left = atof(nfs->tab[1]);
    nfs->dir_right = atof(nfs->tab[31]);
    nfs->total = nfs->dir_left - nfs->dir_right;

    if (nfs->value >= 1500)
        i = set_dir(nfs->total, car_dir[0]);
    else if (nfs->value >= 1000)
        i = set_dir(nfs->total, car_dir[1]);
    else if (nfs->value >= 600)
        i = set_dir(nfs->total, car_dir[2]);
    else if (nfs->value >= 400)
        i = set_dir(nfs->total, car_dir[3]);
    else if (nfs->value >= 200)
        i = set_dir(nfs->total, car_dir[4]);
    else
        i = set_dir(nfs->total, car_dir[5]);
    return (i);
}

char *get_info_lidar(t_n4s *nfs)
{
    int i = 0;
    int j = 0;
    char *copy = NULL;

    copy = malloc(sizeof(char *) * my_strlen(nfs->buffer) + 1);
    if (copy == NULL)
        return (NULL);
    for (i = 0; i != 3;)
        if (nfs->buffer[j++] == ':')
            i++;
    for (i = 0; nfs->buffer[j] != '\0'; j++){
        if (check_alpha(nfs->buffer[j]) == 0){
            copy[i] = nfs->buffer[j];
            i++;
        }
    }
    copy[i - 1] = 0;
    return (copy);
}

int first_line(char *str, char c)
{
    int i, j = 0;
    char *copy = NULL;

    copy = malloc(sizeof(char *) * my_strlen(str));
    if (copy == NULL)
        return (84);
    for (i = my_strlen(str) - 1; str[i] != c && str[i] != '\0'; i--);
    i--;
    for (; str[i] != c && str[i] != '\0'; i--);
    i++;
    for (; str[i] != c && str[i] != '\0';)
        copy[j++] = str[i++];
    copy[j] = '\0';
    if (my_strcmp2(END, copy)){
        free(copy);
        my_putstr(STOP);
        return (1);
    }
    free(copy);
    return (0);
}

int main(void)
{
    setcar_speed(START);
    ia();
    return 0;
}
