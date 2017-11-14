/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:11:41 by ldury             #+#    #+#             */
/*   Updated: 2017/10/29 17:25:17 by ldury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	middle(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	down(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	top(int width, int x)
{
	if (width == 1 || width == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	width;
	int	length;

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
