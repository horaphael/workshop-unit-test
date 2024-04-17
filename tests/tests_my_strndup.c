/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_strndup, tests_my_strndup, .timeout=1)
{
    char *test = "bonjour";

    cr_assert_eq(my_strndup("bonjour", -2), NULL);
    cr_assert_eq(my_strndup(NULL, 4), NULL);
    cr_assert_str_eq(my_strndup(test, 1), "b");
}
