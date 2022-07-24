/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:51:45 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/14 23:52:00 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_memcmp(const void *s11, const void *s22, size_t n)
{
	unsigned const char			*s1;
	unsigned const char			*s2;

	s1 = s11;
	s2 = s22;
	while (n--)
	{
		if (*s1 != *s2)
		{
			return ((*s1 - *s2));
		}
		s1++;
		s2++;
	}
	return (0);
}
