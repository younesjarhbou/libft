/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 04:39:54 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/15 04:39:56 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *bb, int c, size_t len)
{
	unsigned int	i;
	unsigned char	a;
	char			*b;

	b = (char *) bb;
	i = 0;
	a = (unsigned char) c;
	while (i < len)
	{
		b[i] = a;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
// //    char dest[999] = "oldstring";
// //     int src  = 'x';
//    int len = 2;

//   char dest2[] = "oldstring";
//     int src2  = 'A';

// //    printf("mine Before memmove dest = %s, src = %d\n", dest, src);
// //  //  ft_memset(dest2, src2, len);
// //    printf("mine function r = %s\n", ((char	*)ft_memset(dest, src, len)));
// //    printf("mine After memmove dest = %s, src = %d\n", dest, src);

//    printf("Before memmove dest = %s, src = %d\n", dest2, src2);
//   // memset(dest, src, len);
//     printf("origine function r = %s\n",
// ((char	*)memset(dest2, src2, len)));
//    printf("After memmove dest = %s, src = %d\n", dest2, src2);

//    return(0);
// }