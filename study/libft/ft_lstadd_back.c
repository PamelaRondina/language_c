#include "libft.h"

// adicionar um nó no fim da lista
//O primeiro argumento é a lista onde você vai adicionar, e o segundo é o novo nó:
void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *back;

	if (!*lst)
    {
        *lst = new;
        return ;
    }

    back = ft_lstlast(*lst);
    back->next = new;   
}