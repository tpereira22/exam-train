#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 2;

    while (i <= a && i <= b)
    {
        if ((a % i == 0) && (b % i == 0))
            return (i);
        i++;
    }
    return (0);
}

int main(void)
{
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int lower;

    lower = lcm(a, b);
    printf("lower - %u\n", lower);
}