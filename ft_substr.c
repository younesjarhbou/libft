/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:51:22 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/23 09:51:24 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char		*result;
// 	size_t		i;
// 	size_t		j;
// 	size_t		s_len;

// 	s_len = ft_strlen(s);
// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (0);
// 	result = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!result)
// 		return (NULL);
// 	if (start < s_len)
// 	{
// 		while (s[i] != '\0' && j < len)
// 			result[j++] = s[i];
// 		i++;
// 	}
// 	result[j] = '\0';
// 	return (result);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*sub_str;
	unsigned int	i;
	unsigned int	substr_len;

	if (!s)
		return (0);
	str = (char *)s;
	substr_len = ft_strlen(str);
	if (len < substr_len)
		substr_len = len;
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	sub_str = (char *)malloc(substr_len + 1);
	if (!sub_str)
		return (0);
	str += start;
	i = 0;
	while (*str && substr_len--)
		sub_str[i++] = *str++;
	sub_str[i] = '\0';
	return (sub_str);
}

// #include<stdio.h>
// #include<string.h>
// #include<string.h>
// int main()
// {
// 	char s[100] = "younes";
// } 
