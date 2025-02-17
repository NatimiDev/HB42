/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:40:48 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 16:37:42 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_str.h"

void	print_fd(int fd, int tail)
{
	int		chunk_size;
	int		bytes_read;
	char	*content;
	char	*curr_read;

	chunk_size = 1 << 6;
	bytes_read = chunk_size;
	content = NULL;
	curr_read = malloc(sizeof(char) * chunk_size);
	if (!curr_read)
	{
		return ;
	}
	while (bytes_read > 0)
	{
		bytes_read = read(fd, curr_read, chunk_size - 1);
		curr_read[bytes_read] = '\0';
		content = ft_strappend(content, curr_read);
	}
	free(curr_read);
	ft_putstr_tail(content, tail);
}

int	print_file_content(char *filename, int tail)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
	print_fd(fd, tail);
	close(fd);
	return (1);
}

void	print_error_msg(char *filename)
{
	ft_putstr("ft_tail: ");
	ft_putstr(filename);
	ft_putstr(": No such file or directory\n");
}

int	main(int argc, char *argv[])
{
	int	i;
	int	tail;

	if (argc < 3)
	{
		ft_putstr("tail: option requires an argument -- c");
		return (1);
	}
	tail = ft_atoi(argv[2]);
	if (argc == 3)
	{
		print_fd(0, tail);
		return (0);
	}
	i = 3;
	while (i < argc)
	{
		if (!print_file_content(argv[i], tail))
			print_error_msg(argv[i]);
		else if (i != argc - 1)
			ft_putstr("\n");
		i++;
	}
	return (0);
}
