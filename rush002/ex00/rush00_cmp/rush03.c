/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:58:10 by wwu               #+#    #+#             */
/*   Updated: 2017/11/12 19:47:54 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		print_start03(int nb, int index, char *toret)
{
	char	a;
	char	b;
	char	c;
	int		column;

	a = 'A';
	b = 'B';
	c = 'C';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			index[toret] = a;
		}
		else if (column == nb - 1)
		{
			toret[index] = c;
		}
		else
		{
			toret[index] = b;
		}
		index++;
		column++;
	}
	return (index);
}

int		print_middle03(int nb, int index, char *toret)
{
	char	b;
	char	space;
	int		column;

	b = 'B';
	space = ' ';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
		{
			index[toret] = b;
		}
		else
		{
			index[toret] = space;
		}
		index++;
		column++;
	}
	return (index);
}

int		print_end03(int nb, int index, char *toret)
{
	char	a;
	char	b;
	char	c;
	int		column;

	a = 'A';
	b = 'B';
	c = 'C';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			toret[index] = a;
		}
		else if (column == nb - 1)
		{
			toret[index] = c;
		}
		else
		{
			toret[index] = b;
		}
		column++;
		index++;
	}
	return (index);
}

char	*rush03(int x, int y)
{
	int		row;
	char	*toret;
	int index;

	index = 0;
	toret = malloc(x * (y + 1) + 1);
	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				index = print_start03(x, index, toret);
			}
			else
			{
				index = print_middle03(x, index, toret);
			}
			if (row != y)
			{
				toret[index] = '\n';
			}
			row++;
			index++;
		}
		toret[index] = '\0';
	}
	return (toret);
}
