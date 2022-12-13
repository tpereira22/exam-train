#include <stdio.h>
#include <stdlib.h>

int ft_check_high(int i, int a, int b)
{
    while (i >= 1)
    {
        if ((a % i == 0) && (b % i == 0))
            return (i);
        i--;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int a;
        int b;
        int i;

        a = atoi(av[1]);
        b = atoi(av[2]);
        if (a > b)
            i = b;
        else
            i = a;
        printf("high - %d\n", ft_check_high(i, a, b));
    }
    else
        printf("\n");
}
