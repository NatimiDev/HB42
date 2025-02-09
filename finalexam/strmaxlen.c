/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmaxlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:16:48 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/09 09:01:04 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strndup(char *src, int n)
{
	char	*dst;
	int		i;

	dst = malloc(sizeof(char) * (n + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	is_found(char *str, char *to_find)
{
	while (*to_find)
	{
		if (!(*str == *to_find))
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

int	ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (is_found(str, to_find))
			return (1);
		str++;
	}
	return (0);
}

int	found_in_all_strs(char *to_find, char *str[], int nstr)
{
	int	i;

	i = 0;
	while (i < nstr)
	{
		if (!ft_strstr(str[i], to_find))
			return (0);
		i++;
	}
	return (1);
}

char	*find_str_of_len(char *str[], int nstr, char *find, int len)
{
	int		i;
	int		end;
	char	*checkstr;
	char	*maxstr;

	i = 0;
	end = ft_strlen(find);
	if (len > end)
		return (find);
	maxstr = "";
	while ((end - i) >= len)
	{
		checkstr = ft_strndup(&find[i], len);
		if (found_in_all_strs(checkstr, str, nstr))
		{
			maxstr = checkstr;
			checkstr = find_str_of_len(str, nstr, find, len + 1);
			if (ft_strlen(checkstr) > 0)
				return (checkstr);
		}
		i++;
	}
	return (maxstr);
}

int	main(int argc, char *argv[])
{
	char	*maxstr;

	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	if (argc > 2)
	{
		maxstr = find_str_of_len(&argv[2], argc - 2, argv[1], 1);
		ft_putstr(maxstr);
	}
	ft_putstr("\n");
	return (0);
}
