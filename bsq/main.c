/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:21:02 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/16 13:30:18 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char        *array;
	t_bsqinfo   *info;
	char        **table;
	int         width;
	int         height;
	char            **border;
	char            obstacle;
	char            **adding;
	char            **square;
	char			**final;
	int i = 1;
	int k = 0;
	int l = 0;
	int p = 0;
	int j = 0;
	array = from_llist_to_arr();
	info = get_information(array);
	height = info->lines;
	obstacle = info->obstacle;
	width = get_width(array);
	table = get_table(array, width, height);
	border = al_border(table, width, height, obstacle);
	adding = al_adding(border, width, height);
	square = al_square(adding, width, height);
	final = malloc(sizeof(char*) * height);
	while (k < height)
	{
		final[k] = malloc(width + 1);
		k++;
	}
	while(i < height + 1)
	{
		j = 1;
		p = 0;
		while(j < width + 1)
		{
			if (square[i][j] == '0')
			{
				final[l][p] = 'o';	
			}
			else if (square[i][j] >= '1' && square[i][j] <= '9')
			{
				final[l][p] = '.';
			}
			else if (square[i][j] == 'x')
			{
				final[l][p] = 'x';
			}
			ft_putchar(final[l][p]);
			j++;
			p++;
		}
		ft_putchar('\n');
		i++;
		l++;
	}
	return (0);
}
