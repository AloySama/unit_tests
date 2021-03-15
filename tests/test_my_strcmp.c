/*
** EPITECH PROJECT, 2021
** test_my_strcmp.c
** File description:
** test function
*/

#include "unit_header.h"

Test(test_my_strcmp, should_return_the_same_value)
{
    int expected = my_strcmp("bonjour", "bonjoUr");
    int result = strcmp("bonjour", "bonjoUr");

    cr_assert_eq(result, expected);
}

Test(test_my_strcmp, should_return_0)
{
    int expected = my_strcmp("oui", "oui");

    cr_assert_eq(0, expected);
}

Test(test_my_strcmp, should_return_minus_1)
{
    int expected = my_strcmp("Oui", "oui");

    cr_assert_eq(-1, expected);
}

Test(test_my_strcmp, should_return_1)
{
    int expected = my_strcmp("oui", "Oui");

    cr_assert_eq(1, expected);
}