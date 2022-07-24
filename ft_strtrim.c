/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:29:29 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/25 23:29:30 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	static	checkifchar_in_array(char c, char *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (array[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int static	get_index_first(char *array, char *forbiddenarray)
{
	int		i;

	i = 0;
	while (checkifchar_in_array(array[i], forbiddenarray) == 1)
		i++;
	return (i);
}

int static	get_index_second(char *array, char *forbiddenarray)
{
	int		i;
	int		result;

	i = ft_strlen(array) - 1;
	while (checkifchar_in_array(array[i], forbiddenarray) == 1)
	{
		result = i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	int		s11;
	int		s22;

	if (!s1)
		return (NULL);
	s11 = get_index_first((char *)s1, (char *)set);
	s22 = get_index_second((char *)s1, (char *)set);
	if (s11 > s22)
		return (ft_strdup(""));
	copy = ft_substr(s1, s11, s22 - s11 + 1);
	return (copy);
}

// #include<stdio.h>
// int main()
// {
// 	char *longg ="bccaattthhhaaa";
// 	char *shortt = "abc";
// 	int s1;
// 	int s2;
// 	s1 = get_index_first(longg, shortt);
// 	s2 = get_index_second(longg, shortt);
// 	printf("get len : %d\n",ft_strlen(longg));
// 	printf("get index1 : %d\n",s1);
// 	printf("get index2 : %d\n",s2);
// 		printf("get strim : %s\n",ft_strtrim(longg, shortt));
// }