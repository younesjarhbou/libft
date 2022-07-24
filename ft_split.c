/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjarhbou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:02:38 by yjarhbou          #+#    #+#             */
/*   Updated: 2021/11/30 10:02:39 by yjarhbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int static	get_countof_word(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	int	lenth_of_word(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (i);
}

static void	*freearray(char **array, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**fill_array(char *s, char **array, int word_count, char c)
{
	int	i;
	int	j;
	int	word_len;

	i = -1;
	while (++i < word_count)
	{
		while (*s == c)
			s++;
		word_len = lenth_of_word(s, c);
		array[i] = (char *) malloc(sizeof(char) * (word_len + 1));
		if (!(array[i]))
			freearray(array, i);
		j = 0;
		while (j < word_len)
			array[i][j++] = *s++;
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		count_word;
	char	**result;

	if (!s)
		return (NULL);
	count_word = get_countof_word((char *)s, c);
	result = (char **) malloc((count_word + 1) * sizeof(char *));
	if (!(result))
		return (NULL);
	result = fill_array((char *)s, result, count_word, c);
	return (result);
}

// int main()
// {
// 	// char* bigg ="younes,try,this,fucking,one";
// 	// char **splitedarray;
// 	// int i = 0;
// 	// splitedarray = ft_split(bigg, ',');
// 	// while (i < ft_strlen(*splitedarray))
// 	// {
// 	// 	printf("%s",splitedarray[i]);
// 	// 	i++;
// 	// }
// 	char *string = "      split       this for   me  !       ";
// 	char **expected = ((char*[6]){"
//split", "this", "for", "me", "!", ((void *)0)});
// 	char **result = ft_split(string, ' ');
// 	split_cmp_array(expected, result);
// 	return (0);
// }
// char	static	*get_firstword(char	*str, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != "\0" || str[i] != c)4199975
// 		i++;
// 	str = skip_this_c(str[i], c);
// 	return (ft_substr(str[0], 0, i));
// }