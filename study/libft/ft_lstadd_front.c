#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		new->next = *lst;
		*lst = new; 
}

/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new; 
}

void	ft_print_list(t_list *lst)
{
	t_list *ptr;
	int		i;

	i = 0;
	ptr = lst;
	while (ptr)
	{
		printf("%s ->", (char *)ptr->content);
		ptr = ptr->next;
		i++;
	}
	printf("\nsize: %d", i);
	printf("\n");
}

void	del_list(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		lst = lst->next;
		free(ptr);
		ptr = lst;
	}
}

int main(int argc, char **argv)
{
	int	i;
	t_list	*lst;
	t_list	*node;

	i = 1;
	lst = NULL;
	if (argc == 1)
		return (1);
	while (i < argc)
	{
		node = ft_lstnew(argv[i]);
		ft_lstadd_front(&lst, node);
		i++;
/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new; 
}

void	ft_print_list(t_list *lst)
{
	t_list *ptr;
	int		i;

	i = 0;
	ptr = lst;
	while (ptr)
	{
		printf("%s ->", (char *)ptr->content);
		ptr = ptr->next;
		i++;
	}
	printf("\nsize: %d", i);
	printf("\n");
}

void	del_list(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	}
	ft_print_list(lst);
	del_list(lst);
}

//(TUDO REPRESENTA UMA NODE!!)
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;



void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new; 
}








	//(*banana).content; == banana->content; (ptr)
	//teste.next			acessar a variavel na struct (.)
	//node == struct 
	*/