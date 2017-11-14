/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 11:10:08 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/26 22:48:44 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		print(int i, int j, int k, int l)
{
	if (!(i == k && j == l))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(' ');
		ft_putchar(k);
		ft_putchar(l);
		if (!(i == 57 && j == 56 && k == 57 && l == 57))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	l++;
	return (l);
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 56)
		{
			k = 48;
			while (k <= 57)
			{
				l = 49;
				while (l <= 57)
				{
					l = print(i, j, k, l);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
