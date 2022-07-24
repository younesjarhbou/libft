/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:22:02 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/15 00:22:03 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		tofind_size;
	size_t		str_size;

	i = 0;
	str_size = ft_strlen(str);
	tofind_size = ft_strlen(to_find);
	if (tofind_size == 0)
		return ((char *)str);
	if (tofind_size > len || str_size == 0)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&str[i], to_find, tofind_size) == 0)
		{
			if (i + tofind_size > len)
				return (NULL);
			return (((char *) &str[i]));
		}
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    // int a ='A';
//     // char s[] ="younes";
// 	// char *s ="younes";
// 	// char ss[10];
// 	// ft_strcpy(ss,s);
// 	// printf("jarhbou : %s",ss);
// 	// //ft_putchar(*ss);
// 	int len = 0;
//     char s[100] ="youAnes jarhbou try this";
//     char *ss="r";
// 	printf("letstry mine : %s\n",ft_strnstr(s,ss,len));

// 	char s2[100] ="youAnes jarhbou try this";
//     char *ss2 = "this";
// 	printf("letstry  original: %s\n",strnstr(s2,ss2,len));
// }