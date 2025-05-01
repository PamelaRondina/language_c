#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*teste;

	teste = malloc(sizeof(t_list)); //persista, que continue na memoria ate o free.
	if (!teste)
		return (NULL);

	teste->content = content;
	teste->next = NULL;

	return(teste);
}
/*
int main()
{
	t_list	*n1 = ft_lstnew(ft_strdup("Banana"));

	printf("%s", n1->content);
}*/