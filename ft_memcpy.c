/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:23:27 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/18 01:23:42 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest,
const void *src, size_t size)
{
	unsigned int	j;
	char			*c_src;
	char			*c_dest;

	c_src = (char *) src;
	c_dest = (char *) dest;
	j = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (j < size)
	{
		c_dest[j] = c_src[j];
		j++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[999] = "oldstring";
//    const char src[999]  = "newstring";
//    int len = 9;

//   char dest2[] = "oldstring";
//    const char src2[]  = "newstring";

//    printf("mine Before memmove dest = %s, src = %s\n", dest2, src2);
// 	printf("ft_memmove = %s\n",ft_memcpy(dest2, src2, len));
//    printf("mine After memmove dest = %s, src = %s\n", dest2, src2);

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//   // memmove(dest, src, len);
//    printf("memmove = %s\n",memcpy(dest, src, len));
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
