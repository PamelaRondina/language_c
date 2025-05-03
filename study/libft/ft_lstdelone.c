#include "libft.h"

//deleta qualquer tipo de dado
static void del(void *ptr)
{
    free(ptr);
}

//deletar um único nó
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst) //nao tem nó para deletar
        return ;
    else
    {
        del(lst->content); //pode ser qualquer tipo de dado
        free(lst);
        return ;
    }
}

//evitar vazamento na memoria
        //1 - delera o conteudo da caixa    (del(node->content));
        //2 - deleta a caixa                free(node);
        //(node, del) - dentro da funcao ja informa o content