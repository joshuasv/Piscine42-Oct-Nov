/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:20:32 by fclaude           #+#    #+#             */
/*   Updated: 2017/11/12 22:36:24 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_start(int nb)
{
	char	a;
	char	b;
	char	c;
	int		column;

	a = 'A';
	b = 'B';
	c = 'C';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			ft_putchar(a);
		}
		else if (column == nb - 1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		column++;
	}
}

void	print_end(int nb)
{
	char	a;
	char	b;
	char	c;
	int		column;

	a = 'A';
	b = 'B';
	c = 'C';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			ft_putchar(c);
		}
		else if (column == nb - 1)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		column++;
	}
}

void	print_middle(int nb)
{
	char	b;
	char	space;
	int		column;

	b = 'B';
	space = ' ';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
		{
			ft_putchar(b);
		}
		else
		{
			ft_putchar(space);
		}
		column++;
	}
}

void	check(int row, int x, int y)
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
				check(row, x, y);
			}
			else
			{
				print_middle(x);
			}
			if (row != y)
			{
				ft_putchar('\n');
			}
			row++;
		}
	}
	return (0);
}
