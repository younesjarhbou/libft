/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 04:18:53 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/15 04:18:54 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int static	ft_strlen(char *word)
{
	unsigned int	i;

	i = 0;
	while (word[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	j;

	j = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen((char *)src));
}

// int main()
// {
//      char des[100] ="younes";
// 	 char src[] ="jarhbouuuuu";	  
//       printf("dest 1: %s \n",des);
// 	  unsigned long x = strlcpy(des,src,50);
// 	   printf("return 1: %lu \n",x);
// 	    printf("dest 11: %s \n",des);
//     char des2[100] ="younes";
// 	 char src2[] ="jarhbouuuuu";	  
//       printf("dest 2: %s \n",des2);
// 	  unsigned int x2 = ft_strlcpy(des2,src2,50);
// 	   printf("return 2: %d \n",x2);
// 	    printf("dest 22: %s \n",des2);
// 	// char ss[10];
// 	// ft_strcpy(ss,s);
// 	// printf("jarhbou : %s",ss);
// 	// //ft_putchar(*ss);
//     // printf("jarhbou : %s",s);
//     //   int p = 'z'-'Z';
//     //  int pp = 'a'-'A';
// 	//     char des2[100] ="younes";
// 	//  char src2[] ="jarhbou";
//     // ft_strlcpy(des2,src2,2);
//     //   printf("%s",des2);
// }