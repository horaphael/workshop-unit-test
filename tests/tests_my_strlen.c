/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_strlen, tests_strlen, .timeout=1)
{
    cr_assert_eq(my_strlen("toto"), 4);
    cr_assert_eq(my_strlen(NULL), -1);
}
