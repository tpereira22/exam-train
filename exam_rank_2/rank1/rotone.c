#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i])
        {
            if ((av[1][i] >= 65 && av[1][i] <= 90) || (av[1][i] >= 97 && av[1][i] <= 122))
            {
                if (av[1][i] == 'Z')
                    ft_putchar(av[1][i] - 25); 
                else if (av[1][i] == 'z')
                    ft_putchar(av[1][i] - 25);
                else
                    ft_putchar(av[1][i] + 1);
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
        write(1, "\n", 1);
    }     
    else
        write(1, "\n", 1);
}