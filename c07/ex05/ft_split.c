/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:57:18 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 21:12:01 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	if (c == '\0')
		return (1);
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	find_next_split(char *str, char *charset)
{
	int	length;

	length = 0;
	while (!is_in_charset(*str, charset))
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strndup(char *src, unsigned int n)
{
	char	*dst;
	char	*dst_start;

	dst = malloc(sizeof(char) * (n + 1));
	if (dst == NULL)
		return (NULL);
	dst_start = dst;
	while (n > 0 && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		n--;
	}
	*dst = '\0';
	return (dst_start);
}

int	count_splits(char *str, char *charset)
{
	int		count_splits;
	int		char_idx;
	int		i;

	if (*str == '\0')
		return (0);
	i = 0;
	char_idx = -1;
	count_splits = 0;
	while (str[i])
	{
		if (is_in_charset(str[i], charset))
		{
			if (char_idx != (i - 1))
				count_splits++;
			char_idx = i;
		}
		i++;
	}
	if (char_idx != (i - 1))
		count_splits++;
	return (count_splits);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		length;
	int		n_splits;
	char	**result;

	n_splits = count_splits(str, charset);
	result = malloc(sizeof(char *) * (n_splits + 1));
	i = 0;
	j = 0;
	while (is_in_charset(str[j], charset) && str[j] != '\0')
		j++;
	while (i < n_splits)
	{
		length = find_next_split(&str[j], charset);
		result[i] = ft_strndup(&str[j], length);
		j += length;
		while (is_in_charset(str[j], charset) && str[j] != '\0')
			j++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 0;
// 	char *abc = "aba bba";
// 	char *charset = "a";

// 	char **res = ft_split(abc, charset);
// 	while (res && res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }
