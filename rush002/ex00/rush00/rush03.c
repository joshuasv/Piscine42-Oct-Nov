/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:58:10 by wwu               #+#    #+#             */
/*   Updated: 2017/11/12 22:36:14 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		rush(int x, int y)
{
	int		row;

	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y - 1)
		{
			if (row == 0 || row == y)
			{
				print_start(x);
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
		print_end(x);
		ft_putchar('\n');
	}
	return (0);
}
