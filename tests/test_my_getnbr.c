/*
** EPITECH PROJECT, 2021
** 
** File description:
**
*/

#include "unit_header.h"

Test(test_my_getnbr, should_return_0_if_wrong_arg)
{
    int expected = my_getnbr("tuvasbien");

    cr_assert_eq(0, expected);
}

Test(test_my_getnbr, should_return_42424242)
{
    int expected = my_getnbr("coucou42424242_salut");

    cr_assert_eq(42424242, expected);
}

Test(test_my_getnbr, max_of_a_int)
{
    int expected = my_getnbr("2147483647");

    cr_assert_eq(2147483647, expected);
}

Test(test_my_getnbr, min_of_a_int)
{
    int expected = my_getnbr("-2147483648");

    cr_assert_eq(-2147483648, expected);
}