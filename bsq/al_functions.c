/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:29:43 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 23:03:00 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define COUNTERS int i = 0; int j = 0;
#define COMPARE char cmp_topl; char cmp_top; char cmp_l;
#define MAX	int xpos; int ypos; int current_value;

char		**al_border(char **table, int width, int height, char obstacle)
{
	char **new_table;

	COUNTERS;
	new_table = malloc(sizeof(char*) * (height + 1 + 1));
	while (i < height + 1)
	{
		j = 0;
		new_table[i] = malloc(width + 1 + 1);
		while (j < width + 1)
		{
			if (j == 0 || i == 0)
				new_table[i][j++] = '0';
			else if (i > 0 && j >= 0 && table[i - 1][j - 1] == obstacle)
				new_table[i][j++] = '0';
			else
				new_table[i][j++] = '1';
		}
		new_table[i][j] = '\0';
		i++;
	}
	return (new_table);
}

char		minum(char top, char topl, char le)
{
	int t;
	int tl;
	int l;

	t = top - '0';
	tl = topl - '0';
	l = le - '0';
	if (t <= tl && t <= l)
		return (t + '0');
	if (tl <= t && tl <= l)
		return (tl + '0');
	if (l <= t && l <= tl)
		return (l + '0');
	return ('-');
}

char		**al_adding(char **table, int width, int height)
{
	char	min;
	char	current_value;

	COUNTERS;
	COMPARE;
	i = 1;
	while (i < height + 1)
	{
		j = 1;
		while (j < width + 1)
		{
			current_value = table[i][++j];
			if (current_value != '0')
			{
				cmp_top = table[i - 1][j];
				cmp_topl = table[i - 1][j - 1];
				cmp_l = table[i][j - 1];
				min = minum(cmp_top, cmp_topl, cmp_l);
				table[i][j] = (current_value - '0' + min - '0') + '0';
			}
		}
		i++;
	}
	return (table);
}

int			*max_value(char **table, int width, int height)
{
	int big;
	int current_value;
	int	*toret;

	COUNTERS;
	toret = malloc(sizeof(int) * 3);
	big = 0;
	while (i < height + 1)
	{
		j = 0;
		while (j < width + 1)
		{
			current_value = table[i][j] - '0';
			if (current_value > big)
			{
				big = current_value;
				toret[1] = i;
				toret[2] = j;
			}
			j++;
		}
		i++;
		toret[0] = big;
	}
	return (toret);
}

char		**al_square(char **table, int width, int height)
{
	int temp;
	int	*max;

	MAX;
	COUNTERS;
	max = max_value(table, width, height);
	xpos = max[2];
	ypos = max[1];
	current_value = max[0];
	i = 0;
	temp = xpos;
	while (current_value > i)
	{
		xpos = temp;
		j = 0;
		while (current_value > j)
		{
			table[ypos][xpos--] = 'x';
			j++;
		}
		ypos--;
		i++;
	}
	return (table);
}
