/*
** EPITECH PROJECT, 2024
** omar
** File description:
** live.c
*/

#include "../../include/my.h"
#include "../../include/op.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *find_name(char **argv, int position)
{
    char *name;
    int i = 1;
    int a = 0;

    for (; argv[i][my_strlen(argv[i]) - 1] != 'r'; i++);
    name = malloc(sizeof(char) * (my_strlen(argv[i + position] + 1)));
    for (; argv[i + position][a] != '\0'; a++) {
        if (argv[i + position][a] == '.')
            break;
        name[a] = argv[i + position][a];
    }
    name[a] = '\0';
    return name;
}

int live(const char *arena, char **argv, char *position, int i)
{
    char *name = find_name(argv, my_atoi(position));
    int exec = 0;

    if (arena[i] == 0x01) {
        write(1, position, my_strlen(position));
        write(1, "(", 1);
        write(1, name, my_strlen(name));
        write(1, ")", 1);
        write(1, " is alive.", 10);
        write(1, "\n", 1);
        exec = 1;
    }
    return exec;
}
