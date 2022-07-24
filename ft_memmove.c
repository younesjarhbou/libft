/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:27:29 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/16 15:27:31 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t				j;

	j = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		j = size;
		while (j > 0)
		{
			j--;
			((char *)dst)[j] = ((char *)src)[j];
		}
	}
	else
	{
		while (j < size)
		{
			((char *)dst)[j] = ((char *)src)[j];
			j++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[999] = "oldstring";
//    const char src[999]  = "newstring";
//    int len = 3;

//   char dest2[] = "oldstring";
//    const char src2[]  = "newstring";

//    printf("mine Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest2, src2, len);
//    printf("mine function r = %s\n", ((char	*)
//ft_memmove(dest2, src2, len)));
//    printf("mine After memmove dest = %s, src = %s\n", dest, src);

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    memmove(dest, src, len);
//     printf("origine function r = %s\n",
// ((char	*)memmove(dest2, src2, len)));
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
