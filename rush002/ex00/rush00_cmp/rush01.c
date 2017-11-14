/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 16:56:10 by ralee             #+#    #+#             */
/*   Updated: 2017/11/12 19:45:09 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		print_start(int nb, int index, char *toret)
{
	char	beginning;
	char	end;
	char	dash;
	int		column;

	beginning = '/';
	end = '\\';
	dash = '*';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			toret[index] = beginning;
		}
		else if (column == nb - 1)
		{
			toret[index] = end;
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

int		print_end(int nb, int index, char *toret)
{
	char	beginning;
	char	end;
	char	dash;
	int		column;

	beginning = '\\';
	end = '/';
	dash = '*';
	column = 0;
	while (column < nb)
	{
		if (column == 0)
		{
			toret[index] = beginning;
		}
		else if (column == nb - 1)
		{
			toret[index] = end;
		}
		else
		{
			toret[index] = dash;
		}
		index++;
		column++;
	}
	return (index);
}

int		print_middle(int nb, int index, char *toret)
{
	char	vertical;
	char	space;
	int		column;

	vertical = '*';
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

int		checker(int row, int x, int y, int index, char *toret)
{
	if (row == 0)
	{
		index = print_start(x, index, toret);
	}
	else if (row == y - 1)
	{
		index  = print_end(x, index, toret);
	}
	return (index);
}

char		*rush01(int x, int y)
{
	int		row;
	int 	index;
	char	*toret;

	index = 0;
	toret = malloc(x * (y + 1) + 1);
	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
			{
				index = checker(row, x, y, index, toret);
			}
			else
			{
				index = print_middle(x, index, toret);
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
