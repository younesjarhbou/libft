/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:43:20 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/13 15:43:22 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	int	i;
	int	j;
	char
		c;

	c = (char) to_find;
	i = ft_strlen(str);
	j = 0;
	while (str[i] != c && i > 0)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}
