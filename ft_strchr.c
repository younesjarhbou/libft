/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:30:14 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/13 15:30:16 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *strr, int to_find)
{
	int		i;
	int		j;
	char	c;
	char	*str;

	str = (char *)strr;
	c = (char) to_find;
	i = 0;
	j = 0;
	while (str[i] != c && str[i])
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}

// #include<stdio.h>
// #include<string.h>
// #include<strings.h>
// int main()
// {
// 	char	s1[100] = "younes jarhbou";
// 	char	s2[100];
// 	int l ='x';
// 	printf("orignal bzero %s&\n", strchr(s1, l));
// 	printf("mine strchr %s&\n", ft_strchr(s1, l));
// }