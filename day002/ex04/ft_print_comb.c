/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 10:29:47 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/26 22:47:53 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
