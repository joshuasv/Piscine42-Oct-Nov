/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:28:21 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/09 19:49:27 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_putstr(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}

void	ft_putstrerr(char *c)
{
	while (*c != '\0')
	{
		write(2, c, 1);
		c++;
	}
}

int		check_arg(int argc)
{
	if (argc == 1)
	{
		ft_putstrerr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstrerr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if ((check_arg(argc)) == 1)
		return (1);
	if (fd == -1)
	{
		ft_putstrerr("open() error");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstrerr("close() error\n");
		return (1);
	}
	return (0);
}
