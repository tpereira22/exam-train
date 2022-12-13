#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (reject[j] == s[i])
            {
                return (i);
            }
            j++;
        }
        i++;
    }
    while (s[i])
        i++;
    return (i);
}

int main(void)
{
    char s[10] = "Tiago";
    char reject[10] = "ktlk";

    printf("nr - %lu\n", ft_strcspn(s, reject));


}