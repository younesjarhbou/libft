/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                         :+:    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:34:08 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/14 03:34:09 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	static	ft_strlen(char *word)
{
	unsigned int	i;

	i = 0;
	while (word[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	destcount;
	unsigned int	srccount;
	unsigned int	i;

	destcount = ft_strlen(dest);
	srccount = ft_strlen((char *)src);
	i = 0;
	if (size <= destcount)
		return (srccount + size);
	while (src[i] != '\0' && (destcount + i) < size - 1)
	{
		dest[destcount + i] = src[i];
		i++;
	}
	dest[destcount + i] = '\0';
	return (destcount + srccount);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[999] = "oldstring";
//     char src[999]  = "oldsrc";
//    int len = 0;

//   char dest2[999] = "oldstring";
//     char src2[999]  = "oldsrc";

//    printf("mine Before memmove dest = %s, src = %s\n", dest, src);
//  //  ft_memset(dest2, src2, len);
//   // printf("mine function r = %s\n",
// ((char	*)ft_strlcat(dest2, src2, len)));
//    printf("mine After memmove dest = %s, src = %s\n", dest, src);

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//   // memset(dest, src, len);
//     printf("origine function r = %s\n",
// ((char	*)strlcat(dest2, src2, len)));
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }