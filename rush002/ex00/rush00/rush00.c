/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:29:58 by ralee             #+#    #+#             */
/*   Updated: 2017/11/12 22:35:21 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_start_end(int nb)
{
	char	o;
	char	dash;
	int		column;

	o = 'o';
	dash = '-';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
		{
			ft_putchar(o);
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

	vertical = '|';
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
				print_start_end(x);
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
