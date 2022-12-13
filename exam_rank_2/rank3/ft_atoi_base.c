#include <stdio.h>

char    ft_lower(char c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

int ft_convert(char c, int base)
{
    int res = 0;

    printf("c - %c\n", c);
    if (c <= 10)
        res = base + 48;
    else
        res = base - 10 + 97;
    if (c >= '0' && c <= '9' && c <= res)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= res)
        return (10 + c - 'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;


    while (str[i] == 32 || str[i] == 9 || str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 97 && str[i] <= 102) || (str[i] >= 65 && str[i] <= 70))
    {
        printf("res - %d\n", res);
        res += ft_convert(ft_lower(str[i]), str_base);
        i++;
    }
    return (res * sign);
}

int main()
{
    char str[5] = "7d";

    printf("nr - %d\n", ft_atoi_base(str, 16));
}