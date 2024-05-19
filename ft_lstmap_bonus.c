/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:09:51 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:53:12 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	begin = NULL;
	while (temp)
	{
		new = ft_lstnew(temp->content);
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		new->content = f(new->content);
		ft_lstadd_back(&begin, new);
		temp = temp->next;
	}
	return (begin);
}
