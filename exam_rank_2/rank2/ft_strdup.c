#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i;
    char *str;

    i = 0;
    while (src[i])
        i++;
    str = malloc(sizeof(char *) * i + 1);
    i = 0;
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    return (str);
}

int main(void)
{
    char    array[5] = "Tiago";
    char    *array2;

    array2 = ft_strdup(array);
    printf("str - %s", array2);
}