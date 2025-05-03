#include "libft.h"

//informa o ultimo nó de uma lista encadeada
// nesxt é NULL pois nao aponta para outra lista!

t_list *ft_lstlast(t_list *lst)
{
    t_list *last_node;

    if (!lst)
        return (NULL);

    last_node = lst;

    while (last_node->next != NULL) //percorre ate que o next nao visualize o proximo nó
        last_node = last_node->next; //acessa o proximo next.
        
    return (last_node); // retorna o ultimo *next da struct
}
