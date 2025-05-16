/*
** EPITECH PROJECT, 2024
** omar
** File description:
** my_itoa.c
*/

#include <stdio.h>
#include <stdlib.h>

int count_len(int nbr)
{
    int stock = 0;

    if (nbr == 0)
        stock = 1;
    for (; nbr > 0; stock++)
        nbr /= 10;
    return stock;
}

char *my_itoa(int nbr)
{
    int len = count_len(nbr);
    char *score = malloc(sizeof(char) * (len + 1));
    int x = len - 1;

    for (; x >= 0; x--) {
        score[x] = (nbr % 10) + 48;
        nbr /= 10;
    }
    score[len] = '\0';
    return score;
}
