/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:21:02 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 23:06:12 by jsoutelo         ###   ########.fr       */
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
	int j = 0;
	int i = 0;
	array = from_llist_to_arr();
	info = get_information(array);
	height = info->lines;
	obstacle = info->obstacle;
	width = get_width(array);
	table = get_table(array, width, height);
	border = al_border(table, width, height, obstacle);
	adding = al_adding(border, width, height);
	square = al_square(adding, width, height);
	while(i < height + 1)
	{
		j = 0;
		while(j < width + 1)
		{
			ft_putchar(square[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
