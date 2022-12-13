#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int *array;
    int len = start;
    int count = 0;
    int i = 0;

    if (start <= end)
    {
        while (len <= end)
        {
            len++;
            count++;
        }
    }
    else
    {
        while (len >= end)
        {
            len--;
            count++;
        }
    }
    array = malloc(sizeof(int) * count);
    if (!array)
        return (NULL);
    if (start <= end)
    {
        while (start <= end)
        {
            array[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while (start >= end)
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    return (array);
}

int main(void)
{
    int i = 0;
    int a = 5;
    int b = 5;
    int *array;

    array = ft_range(a, b);
    //printf("value - %d\n", array[0]);
    while (a >= b)
    {
        printf("value - %d\n", array[i]);
        a--;
        i++;
    }
    
}