/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_array_len, tests_array_len, .timeout=1)
{
    char **array = malloc(sizeof(char *));
    int count = 0;

    for (int i = 0; array[i] != NULL; i ++) {
        count ++;
    }
    cr_assert_eq(my_array_len(array), count);
}
