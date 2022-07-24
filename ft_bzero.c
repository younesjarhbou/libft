/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:54:31 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/17 21:54:33 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	char		*help;
	size_t		i;

	i = 0;
	if (n == 0)
		return ;
	help = (char *) s;
	while (i < n)
	{
		help[i] = 0;
		i++;
	}
	s = (void *) help;
}
// #include<stdio.h>
// #include<string.h>
// #include<strings.h>
// int main()
// {
// 	char	s1[100];
// 	char	s2[100];
// 	int l =16;
// 	bzero(s1, l);
// 	printf("orignal bzero %s&\n", s1);
// 	ft_bzero(s2, l);
// 	printf("mine bzero %s&\n", s2);

// }
