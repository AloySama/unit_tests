/*
** EPITECH PROJECT, 2021
** 
** File description:
**
*/

#include "unit_header.h"

Test(test_my_strncmp, should_return_0)
{
    int expected = my_strncmp("Hello", "Hello", 5);

    cr_assert_eq(0, expected);
}

Test(test_my_strncmp, should_return_0_if_n_is_smaller)
{
    int expected = (my_strncmp("SALUATION", "SALUTATIOn", 4));

    cr_assert_eq(0, expected);
}

Test(test_my_strncmp, should_return_minus_1_strncmp)
{
    int expected = my_strncmp("Coucou", "coucou", 6);

    cr_assert_eq(-1, expected);
}

Test(test_my_strncmp, should_return_1_strncmp)
{
int expected = my_strncmp("coucou", "Coucou", 2);

    cr_assert_eq(1, expected);
}