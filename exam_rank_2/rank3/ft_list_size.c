#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void    *data;
}   t_list;

int ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while (begin_list->next != NULL)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i + 1);
}

int main()
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *d;
    t_list *e;
    t_list *f;


    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    c = malloc(sizeof(t_list)); 
    d = malloc(sizeof(t_list));
    e = malloc(sizeof(t_list));
    f = malloc(sizeof(t_list));
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    printf("i - %d\n", ft_list_size(a));
}