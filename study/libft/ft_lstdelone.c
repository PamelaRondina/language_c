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

int main (void)
{
    t_list *node1;
    t_list *node2;
    t_list *list;
    
    node1 = ft_lstnew("Continue a ");
    node2 = ft_lstnew("Nadar!");

    node1->next = node2;
    list = node1;

    while(list) //Antes de funcao de deletar!
    {       
        printf("Antes de função: %s\n", (char *)list->content);
        list = list->next;
    }
    ft_lstdelone(node2, del);
    node1->next = NULL;

    while(list) //Depois da função
    {       
        printf("Depois de função: %s\n", (char *)list->content);
        list = list->next;
    }




    
}

//evitar vazamento na memoria
        //1 - deleta o conteudo da caixa    (del(node->content));
        //2 - deleta a caixa                free(node);
        //(node, del) - dentro da funcao ja informa o content