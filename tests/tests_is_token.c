/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(is_token, tests_is_token, .timeout=1)
{
    char *test = "bonjour";
    char *tests = NULL;
    char c = 'o';
    char d = 'z';

    cr_assert_eq(is_token(c, test), true);
    cr_assert_eq(is_token(d, test), false);
    cr_assert_eq(is_token(d, tests), false);
    cr_assert_eq(is_token('\0', tests), false);
    cr_assert_eq(is_token('\0', test), false);
}
