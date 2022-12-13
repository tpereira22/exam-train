#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return (res * sign);
}

int main(void)
{
    char str[6] = "-35644";
    int a;

    a = ft_atoi(str);
    printf("a = %d\n", a);

}