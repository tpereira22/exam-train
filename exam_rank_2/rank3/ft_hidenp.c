#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;

        while (av[2][i] && av[1][j])
        {
            if (av[1][j] == av[2][i])
                j++;
            i++;
        }
        if (av[1][j] == '\0')
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
}