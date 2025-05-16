/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday04-tony.halilovic
** File description:
** my_getnbr.c
*/

#include "../include/my.h"

int my_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n' ||
    *str == '\r' || *str == '\v' || *str == '\f') {
        str++;
    }
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}
