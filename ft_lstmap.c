/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimirzoe <dimirzoe@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:29:21 by dimirzoe          #+#    #+#             */
/*   Updated: 2023/12/13 07:59:28 by dimirzoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear (&new_list, del);
			return (NULL);
		}
		new_node -> content = f (lst->content);
		new_node -> next = NULL;
		ft_lstadd_back (&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

void	*offset(void *content)
{
	content = content + 2;
	return (content);
}
