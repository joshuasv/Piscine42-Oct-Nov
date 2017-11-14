/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 16:56:10 by ralee             #+#    #+#             */
/*   Updated: 2017/11/12 22:35:47 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_start(int nb)
{
	char	beginning;
	char	end;
	char	dash;
	int		column;

	beginning = '/';
	end = '\\';
	dash = '*';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			ft_putchar(beginning);
		}
		else if (column == nb - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(dash);
		}
		column++;
	}
}

void	print_end(int nb)
{
	char	beginning;
	char	end;
	char	dash;
	int		column;

	beginning = '\\';
	end = '/';
	dash = '*';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			ft_putchar(beginning);
		}
		else if (column == nb - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(dash);
		}
		column++;
	}
}

void	print_middle(int nb)
{
	char	vertical;
	char	space;
	int		column;

	vertical = '*';
	space = ' ';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
		{
			ft_putchar(vertical);
		}
		else
		{
			ft_putchar(space);
		}
		column++;
	}
}

void	checker(int row, int x, int y)
{
	if (row == 0)
	{
		print_start(x);
	}
	else if (row == y - 1)
	{
		print_end(x);
	}
}

int		rush(int x, int y)
{
	int		row;

	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				checker(row, x, y);
			}
			else
			{
				print_middle(x);
			}
			if (row != y - 1)
			{
				ft_putchar('\n');
			}
			row++;
		}
		ft_putchar('\n');
	}
	return (0);
}
