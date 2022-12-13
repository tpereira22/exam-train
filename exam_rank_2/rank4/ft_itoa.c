#include <stdlib.h>
#include <stdio.h>

char *ft_write_str(char *str, int nbr, int sign, int len)
{
    if (sign == 1)
        str[0] = '-';
    while (nbr)
    {
        str[--len] = (nbr % 10) + 48;
        nbr /= 10;
    }
    return (str);
}

char    *ft_itoa(int nbr)
{
    char *str;
    int len = 0;
    int sign = 0;
    int nb2;

    if (nbr < 0)
    {
        sign = 1;
        nbr *= -1;
    }
    nb2 = nbr;
    while (nb2 > 0)
    {
        nb2 = nb2/10;
        len++;
    }
    //printf("len - %d | sign - %d | len + sign - %d\n", len, sign, len + sign);
    str = malloc(sizeof(str) * len + sign + 1);
    str = ft_write_str(str, nbr, sign, len + sign);
    str[len + sign] = '\0';
    return (str);
}

int main(void)
{
    int a = 5;
    int b = 342;
    int c = -42;

    ft_itoa(b);
    printf("\na - %s\nb - %s\nc - %s\n", ft_itoa(a), ft_itoa(b), ft_itoa(c));
}