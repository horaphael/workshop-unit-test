/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/

#include "tests_includes.h"

Test(freen_array, tests_freen_array, .timeout=1)
{
    char **array = malloc(sizeof(char *));
    char **array2 = NULL;
    int count = 0;
    int count1 = -1;

    for (int i = 0; array[i] != NULL; i ++) {
        count ++;
    }
    freen_array(array, count);
    freen_array(array2, count1);
    freen_array(array, count1);
}
