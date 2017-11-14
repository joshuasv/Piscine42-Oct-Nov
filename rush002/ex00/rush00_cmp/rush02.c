/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:31:21 by tzheng            #+#    #+#             */
/*   Updated: 2017/11/12 19:41:43 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		print_start02(int nb, int index, char *toret)
{
	char	a;
	char	b;
	int		column;

	a = 'A';
	b = 'B';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
		{
			toret[index] = a;
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

int		print_end02(int nb, int index, char *toret)
{
	char	b;
	char	c;
	int		column;

	b = 'B';
	c = 'C';
	column = 0;
	while (column < nb)
	{
		if (column == 0 || column == nb - 1)
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

int		print_middle02(int nb, int index, char *toret)
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
			toret[index] = b;
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

int		check(int row, int x, int y, int index, char *toret)
{
	if (row == 0)
	{
		index = print_start02(x, index, toret);
	}
	else if (row == y - 1)
	{
		index = print_end02(x, index, toret);
	}
	return (index);
}

char	*rush02(int x, int y)
{
	int		row;
	char	*toret;
	int		index;

	index = 0;
	toret = malloc(x * (y + 1) + 1);
	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				index = check(row, x, y, index, toret);
			}
			else
			{
				index = print_middle02(x, index, toret);
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
