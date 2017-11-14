/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:53:25 by ldury             #+#    #+#             */
/*   Updated: 2017/10/29 17:24:34 by ldury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	down(int width, int x)
{
	if (width == 1)
		ft_putchar(92);
	else if (width == x)
		ft_putchar(47);
	else
		ft_putchar('*');
}

void	middle(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	top(int width, int x)
{
	if (width == 1)
		ft_putchar(47);
	else if (width == x)
		ft_putchar(92);
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int width;
	int length;

	if (x <= 0 || y <= 0)
		return ;
	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if (length == 1)
				top(width, x);
			else if (length == y)
				down(width, x);
			else
				middle(width, x);
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
