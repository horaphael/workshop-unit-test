/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_free, tests_free, .timeout=1)
{
    char *str = malloc(sizeof(int) * 5);

    my_free(str);
    my_free(NULL);
}
