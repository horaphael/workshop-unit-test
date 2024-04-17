/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/
#include "tests_includes.h"

Test(my_str_to_word_array, tests_my_str_to_word_array, .timeout=1)
{
    cr_assert_eq(my_str_to_word_array(NULL, "bonjour"), NULL);
    cr_assert_eq(my_str_to_word_array("bonjour", NULL), NULL);
}
