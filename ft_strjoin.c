/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:46:02 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/23 10:46:03 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[j])
	{
		result[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		result[j + i] = s2[i];
		i++;
	}
	result[j + i] = '\0';
	return (result);
}
// int main()
// {
// 	char	*a1="younes";
// 	char	*a2="jarhbou";
// 	printf("original is %s",ft_strjoin(a1,a2));
// }
