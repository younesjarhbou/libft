/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:18:41 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/13 15:18:44 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	a;

	a = c;
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
	}
	return (a);
}