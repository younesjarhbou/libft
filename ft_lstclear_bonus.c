/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:01:34 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/12/13 22:01:42 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextone;

	if (!lst)
		return ;
	while (*lst)
	{
		nextone = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextone;
	}
	*lst = 0;
}
