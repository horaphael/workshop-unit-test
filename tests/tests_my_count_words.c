/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_count_words, tests_count_words, .timeout=1)
{
    char const *str = NULL;
    char const *sepa = NULL;
    int count = 0;

    cr_assert_eq(my_count_words(str, "bonjour"), -1);
    cr_assert_eq(my_count_words("bonjour", sepa), -1);
}
