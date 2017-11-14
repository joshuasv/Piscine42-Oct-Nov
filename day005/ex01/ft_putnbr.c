/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:34:01 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 21:06:05 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_max_int(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else if (nb == 2147483647)
	{
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('7');
		return (1);
	}
	else
	{
		return (0);
	}
}

int		check_min_int(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	char	c[11];
	int		i;

	i = 0;
	if (check_max_int(nb) == 1 || check_min_int(nb) == 1)
	{
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb > 0)
	{
		c[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i >= 0)
	{
		ft_putchar(c[i--]);
	}
}
