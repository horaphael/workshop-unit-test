/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(str_is_token, tests_str_is_token, .timeout=1)
{
    char *test = "bonjour";
    char *tests = NULL;
    char c = 'o';
    char d = 'z';

    cr_assert_eq(str_is_token("bonjour", test), true);
    cr_assert_eq(str_is_token(NULL, test), false);
    cr_assert_eq(str_is_token("bonjour", NULL), false);
    cr_assert_eq(str_is_token(NULL, NULL), false);
}
