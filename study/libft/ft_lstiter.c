#include "libft.h"

//aplicar uma função em cada nó
//ponteiro para o primeiro no da lista
//função que será aplicada a cada conteúdo (content).
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}