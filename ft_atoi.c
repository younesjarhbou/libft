/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:21 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/17 21:34:24 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	r;
	int		signedd;

	i = 0;
	signedd = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+' || str[i] == '-' ) && !signedd)
	{
		signedd = 1;
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}

// #include<stdio.h>
// #include<stdlib.h>
// int main(void)
// {
//    // int x = '   '
//     char*   test = "     	2147483647fdsfds";
// 	printf("give it a try %d \n",ft_atoi(test));
//     printf("original try %d",atoi(test));
//     //   puts(ft_atoi(" ---+--+1234ab567"));
// }