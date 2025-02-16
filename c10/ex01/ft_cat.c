/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:02:23 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/16 15:31:08 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	print_file_content(char *filename)
{
	int		fd;
	int		buffer_size;
	int		bytes_read;
	char	content[1 << 6];

	buffer_size = 1 << 6;
	bytes_read = buffer_size;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (bytes_read > 0)
	{
		bytes_read = read(fd, content, buffer_size - 1);
		content[bytes_read] = '\0';
		ft_putstr(content);
	}
	close(fd);
	return (1);
}

void	print_stdin()
{	
	int		buffer_size;
	int		bytes_read;
	char	content[1 << 6];

	buffer_size = 1 << 6;
	bytes_read = buffer_size;
	while (bytes_read > 0)
	{
		bytes_read = read(0, content, buffer_size - 1);
		content[bytes_read] = '\0';
		ft_putstr(content);
	}
}

int	main(int argc, char *argv[])
{
	int i;
    
	if (argc == 1)
	{
		print_stdin();
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if(!print_file_content(argv[i]))
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
		}
		i++;
	}
	return (0);
}