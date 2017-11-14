/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:31:19 by ldury             #+#    #+#             */
/*   Updated: 2017/10/29 17:25:46 by ldury            ###   ########.fr       */
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

void	top_down(int width, int x)
{
	if (width == 1)
		ft_putchar('A');
	else if (width == x)
		ft_putchar('C');
	else
		ft_putchar('B');
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
