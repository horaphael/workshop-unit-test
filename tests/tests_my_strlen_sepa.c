/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_strlen_sepa, tests_my_strlen_sepa, .timeout=1)
{
    char const *str = "bonjour";
    int count = 0;
    for (int i = 0; str[i] && is_token(str[i], "bonjour"); i ++) {
        count ++;
    }
    cr_assert_eq(my_strlen_sepa(NULL, "bonjour"), -1);
    cr_assert_eq(my_strlen_sepa("bonjour", NULL), -1);
}
