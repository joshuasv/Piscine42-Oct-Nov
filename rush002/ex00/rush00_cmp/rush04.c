/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:20:32 by fclaude           #+#    #+#             */
/*   Updated: 2017/11/12 19:54:33 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		print_start04(int nb, int index, char *toret)
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

int		print_end04(int nb, int index, char *toret)
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
			toret[index] = c;
		}
		else if (column == nb - 1)
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

int		print_middle04(int nb, int index, char *toret)
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

int		check04(int row, int x, int y, int index, char *toret)
{
	if (row == 0)
	{
		index = print_start04(x, index, toret);
	}
	else if (row == y - 1)
	{
		index = print_end04(x, index, toret);
	}
	return (index);
}

char	*rush04(int x, int y)
{
	int		row;
	char	*toret;
	int	index;

	index = 0;
	toret = malloc(x * (y + 1) + 1);
	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				index = check04(row, x, y, index, toret);
			}
			else
			{
				index = print_middle04(x, index, toret);
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
