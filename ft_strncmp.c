/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:24:51 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/13 16:24:52 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ss1, const char *ss2, size_t n)
{
	unsigned const char		*s1;
	unsigned const char		*s2;

	s1 = (unsigned char *) ss1;
	s2 = (unsigned char *) ss2;
	while (n--)
	{
		if ((*s1 != *s2) | (*s1 == '\0' || *s2 == '\0'))
			return ((*s1 - *s2));
		s1++;
		s2++;
	}
	return (0);
}

// #include<unistd.h>
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// #include<strings.h>
// int main ()
// {
// 	char * s = "younes";
// 	char * s2 = "younes";
// 	int l = 10;
// 	printf("original one : %d\n", strncmp(s, s2, 10));
// 	printf("mine one : %d\n", ft_strncmp(s, s2, 10));
// }
