/*
** EPITECH PROJECT, 2024
** omar
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    while (str[i] != '\0')
        i++;
    return i;
}
