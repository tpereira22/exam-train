#include <unistd.h>

void    ft_print(char c)
{
    write(1, &c, 1);
}

void convert(int i)
{
    if (i > 9)
    {
        convert(i / 10);
        convert(i % 10);
    }
    else
        ft_print(i + 48);


}

int main(void)
{
    int i;

    i = 0;
    while (++i <= 100)
    {
        if ((i % 3) == 0 && (i % 5) == 0)
            write(1, "fizzbuzz\n", 9);
        else if ((i % 3) == 0)
            write(1, "fizz\n", 5);
        else if ((i % 5) == 0)
            write(1, "buzz\n", 5);
        else
        {
            convert(i);
            ft_print(10);
        }
    }
}