/*
** EPITECH PROJECT, 2021
** 
** File description:
**
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; (s1[i] && s1[i] == s2[i]) && i == n - 1; i++, n++);
    return ((s1[i] - s2[i]) == 0 ? 0 : s1[i] - s2[i] > 0 ? 1 : -1);
}