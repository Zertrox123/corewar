/*
** EPITECH PROJECT, 2024
** omar
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/op.h"

int corewar(char *arena, char **argv)
{
    int position = 0;
    int marge = 0;

    for (int i = 0; i < MEM_SIZE; i++) {
        live(arena, argv, my_itoa(position), i);
        if (arena[i] == 0x01 && marge <= 0) {
            position++;
            marge = 200;
        }
        marge--;
    }
}

int find_file(char **argv)
{
    int compteur = 0;

    for (int i = 0; argv[i] != NULL; i++) {
        if (argv[i][my_strlen(argv[i]) - 1] == 'r')
            compteur++;
    }
    compteur--;
    return compteur;
}

char *fill_arena(char *arena, char **argv, int nb_file)
{
    FILE *file;
    size_t bytes_read;
    int put_char = 0;

    for (int i = 0; i < MEM_SIZE; i++)
        arena[i] = '0';
    for (int i = 0; argv[i] != NULL; i++) {
        file = fopen(argv[i], "rb");
        if (file) {
            fseek(file, 2192, SEEK_SET);
            bytes_read = fread(arena + put_char, 1, 1024, file);
            put_char = (nb_file % MEM_SIZE) * i;
            fclose(file);
        }
    }
    return arena;
}

int main(int argc, char **argv)
{
    int nb_file = find_file(argv);
    int nb_cycle = 0;
    char arena[MEM_SIZE];

    for (int i = 0; argv[i] != NULL; i++) {
        if (my_strcmp(argv[i], "-dump") == 0)
            nb_cycle += my_atoi(argv[i + 1]);
    }
    if (nb_cycle != 0) {
        while (nb_cycle != 0) {
            corewar(fill_arena(arena, argv, nb_file), argv);
            nb_cycle--;
        }
    } else {
        while (1)
            corewar(arena, argv);
    }
    return 0;
}

/*
printf("Premier 128 octets de l'arena :\n");
for (int i = 0; i < 128; i++) {
    printf("%02x ", (unsigned char)arena[i]);
}
printf("\n");
*/
