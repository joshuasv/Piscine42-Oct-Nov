/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:05:09 by ldury             #+#    #+#             */
/*   Updated: 2017/10/29 18:10:00 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	top_down(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar(111);
	else
		ft_putchar(45);
}

void	middle(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar(124);
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int width;
	int length;

	if (x <= 0 || y <= 0)
		return 0;
	length = 1;
	while (length <= y)
	{
		width = 1;
		while (width <= x)
		{
			if (length == 1 || length == y)
				top_down(width, x);
			else
				middle(width, x);
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}
