#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new_elem)
{
	t_list *tmp;

	if (!new_elem || !lst)
		return ;
	tmp = *lst;
	if (!tmp)
	{
		*lst = new_elem;
		return ;
	}
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_elem;
}