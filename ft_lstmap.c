#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;

	new = NULL;
	while (lst)
	{
		newlst = ft_lstnew((*f)(lst->content));
		if (!newlst)
		{
			ft_lstclear(&new, del);
			return (new);
		}
		ft_lstadd_back(&new, newlst);
		lst = lst->next;
	}
	return (new);
}
