#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

int main(void)
{
    char str[5] = "olaa";

    ft_putstr(str);
}