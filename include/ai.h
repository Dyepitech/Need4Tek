/*
** EPITECH PROJECT, 2020
** ai
** File description:
** ai
*/

#ifndef AI_H_
#define AI_H_
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

#define GIL "GET_INFO_LIDAR\n"
#define START "START_SIMULATION\n"
#define END "Track Cleared\n"
#define STOP "STOP_SIMULATION"
#define WHEEL "wheels_dir:"

static char *car_speed[6] = {
    "car_forward:0.8\n",
    "car_forward:0.6\n",
    "car_forward:0.5\n",
    "car_forward:0.4\n",
    "car_forward:0.3\n",
    "car_forward:0.2\n"
};

static char *car_dir[6] = {
    "0.005\n",
    "0.05\n",
    "0.1\n",
    "0.2\n",
    "0.3\n",
    "0.5\n"
};

typedef struct s_n4s
{
    char **tab;
    float value;
    char *buffer;
    float dir_right;
    float dir_left;
    float total;
} t_n4s;

int check_alpha(char c);
int	setcar_speed(char *str);
int	set_dir(float i, char *speed);
int recept_car2(t_n4s *nfs, int i);
int recept_car_val(t_n4s *nfs);
int	choose_dir(t_n4s *nfs);
char *get_info_lidar(t_n4s *nfs);
int first_line(char *str, char c);
t_n4s *init_struct(void);
void in_loop(t_n4s *nfs);
int ia(void);
int main(void);
char **my_strtok(char *str, char *c);
int	my_count_word(char *str, char *c);
int	char_in_str(char c, char *str);

#endif /* !AI_H_ */
