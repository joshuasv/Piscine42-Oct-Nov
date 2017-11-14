/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:29:58 by ralee             #+#    #+#             */
/*   Updated: 2017/11/12 20:32:12 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		print_start_end(int nb, int index, char *toret)
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
			toret[index] = o;
		}
		else
		{
			toret[index] = dash;
		}
		column++;
		index++;
	}
	return (index);
}

int		print_middle00(int nb, int index, char *toret)
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
			toret[index] = vertical;
		}
		else
		{
			toret[index] = space;
		}
		column++;
		index++;
	}
	return (index);
}

char	*rush00(int x, int y)
{
	int		row;
	char	*toret;
	int		index;

	toret = malloc(x*(y + 1) + 1);
	index = 0;
	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				index = print_start_end(x, index, toret);
			}
			else
			{
				index = print_middle00(x, index, toret);
			}
			if (row != y)
			{
				toret[index++] = '\n';
			}
			row++;
		}
		toret[index] = '\0';
	}
	
	return (toret);
}
