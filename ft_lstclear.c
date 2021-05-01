#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*fix;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		fix = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = fix;
	}
}
