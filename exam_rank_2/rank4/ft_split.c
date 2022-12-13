#include <stdlib.h>
#include <stdio.h>

int countwords(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] == 32 || str[i] == 9)
        i++;
    while (str[i])
    {
        if ((str[i] != 32 && str[i] != 9) && (str[i + 1] == 32 || str[i + 1] == 9))
        {
            count++;
            while ((str[i] == 32 || str[i] == 9) && (str[i+1] == 32 || str[i + 1] == 9))
                i++;
        }
        i++;
    }
    if (str[i - 1] == 32 || str[i - 1] == 9)
        return (count);
    else
        return (count + 1);
}

int word_len(char *str, int i)
{
    while (str[i] != 32 && str[i] != 9 && str[i])
        i++;
    return (i);
}

char    *ft_write_word(char *matrix, char *str, int i, int len)
{
    int j = 0;

    while (i < len)
    {
        matrix[j] = str[i];
        j++;
        i++;
    }
    matrix[j] = '\0';
    return (matrix);
}

char **ft_fill(char *str, char **matrix)
{
    int i = 0;
    int len = 0;
    int j;

    j = 0;
    while (str[i])
    {
        if (str[i] != 32 && str[i] != 9)
        {
            len = word_len(str, i);
            matrix[j] = malloc(sizeof(matrix[j]) * (len - i) + 1);
            if (!matrix[j])
                return (NULL);
            matrix[j] = ft_write_word(matrix[j], str, i, len);
            while (str[i] != 32 && str[i] != 9)
                i++;
            j++;
        }
        else
            i++;
    }
    matrix[j] = '\0';
    return(matrix);
}

char    **ft_split(char *str)
{
    int nr_words;
    char **matrix;

    nr_words = countwords(str);
    matrix = malloc(sizeof(*matrix) * nr_words + 1);
    if (!matrix)
        return (NULL);
    matrix = ft_fill(str, matrix);
    return (matrix);
}

int main(void)
{
    char str[80] = "ola ade ss jhdeb ejue jed   ";
    char **matrix;
    int i = 0;

    matrix = ft_split(str);
    while (i < 5)
    {
        printf("str - %s\n", matrix[i]);
        i++;
    }
    i = 0;
    while (matrix[i])
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}