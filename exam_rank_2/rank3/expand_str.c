#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i] == 32 || av[1][i] == 9)
            i++;
        while (av[1][i])
        {
            if (av[1][i] != 32 && av[1][i] != 9)
                write(1, &av[1][i], 1);
            else if (av[1][i] == 32 || av[1][i] == 9)
            {
                while (av[1][i + 1] == 32 || av[1][i + 1] == 9)
                    i++;
                if (av[1][i + 1])
                    write(1, "   ", 3);
            }
            i++;
        }
    }
    else
        write(1, "\n", 1);
}