/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:44:51 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/12/12 16:44:52 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	i = -1;
	if (!s)
		return (NULL);
	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(str))
		return (NULL);
	while (s[++i])
	{
		str[i] = f(i, s[i]);
	}
	str[i] = '\0';
	return (str);
}
