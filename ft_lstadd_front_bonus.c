#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new_elem)
{
	if (!new_elem)
		return ;
	new_elem->next = *lst;
	*lst = new_elem;
}