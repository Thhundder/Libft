#include "libft.h"
#include <stdlib.h>

static t_list *ft_lstnewe(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return NULL;
	new->content = content;
	new->next = NULL;
	return new;
}

static void ft_lstcleare(t_list **lst, void (*del)(void *))
{
	t_list *tmp;
	t_list *next;

	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
static void ft_lstadd_backe(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!new || !lst)
		return ;
	tmp = *lst;
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_elem;

    if (!lst || !f || !del)
        return 0;
    new_list = 0;
    while (lst)
    {
        new_elem = ft_lstnewe(f(lst->content));
        if (!new_elem)
        {
            ft_lstcleare(&new_list, del);
            return 0;
        }
        ft_lstadd_backe(&new_list, new_elem);
        lst = lst->next;
    }
    return new_list;
}
