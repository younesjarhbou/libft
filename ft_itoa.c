/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:53:43 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/12/10 17:53:44 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_of_number(int a)
{
	int	i;

	i = 0;
	if (a <= 0)
	{
		i++;
		a *= -1;
	}
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*fill_number(char *s, unsigned int n, int len)
{
	while (n > 0)
	{
		s[len--] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		countof_number;

	countof_number = count_of_number(n);
	s = malloc(sizeof(char) * (count_of_number(n) + 1));
	if (!(s))
		return (0);
	i = 0;
	s[countof_number--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s = fill_number(s, n, countof_number);
	return (s);
}
