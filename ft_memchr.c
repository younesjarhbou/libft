/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:33:17 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/13 16:33:18 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *str, int to_find, size_t size)
{
	unsigned char	*src;

	src = (unsigned char *)str;
	while (size--)
	{
		if ((unsigned char)*src == (unsigned char) to_find)
			return ((void *) src);
		src++;
	}
	return (NULL);
}
