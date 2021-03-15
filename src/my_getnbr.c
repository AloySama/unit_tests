/*
** EPITECH PROJECT, 2021
** 
** File description:
**
*/

int my_getnbr(char const *str)
{
    int count = 0;
    int sign = 1;
    int res = 0;
    int digits = 0;

    for (; str[count] != '\0' && (str[count] < 48 || str[count] > '9'); count++)
        if (str[count] == '-')
            sign *= -1;
    if (str[count] == '\0')
        return (0);
    for (; str[count] >= '0' && str[count] <= '9'; count++) {
        if (digits > 10 || res > 214748364
            || (str[count] - 48 > 7 && res > 214748364))
            return (0);
        res = res * 10 + (str[count] - 48);
        digits++;
    }
    return (sign * res);
}