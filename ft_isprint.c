/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:17:43 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/15 19:18:44 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int str)
{
	int	a;

	a = str;
	if (!(a >= 32 && a <= 126))
	{
		return (0);
	}
	return (1);
}
