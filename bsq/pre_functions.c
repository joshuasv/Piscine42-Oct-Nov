/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:32:12 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 12:50:44 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "ft_list.h"

t_list		*output_to_llist(void)
{
	char	ch;
	t_list	*element;
	t_list	*first;

	element = ft_create_elem(0);
	first = element;
	while (read(0, &ch, 1) > 0)
	{
		ft_list_push_back(&element, ch);
		element = element->next;
	}
	element = first->next;
	return (element);
}

char		*from_llist_to_arr(void)
{
	int		size;
	char	*array;
	t_list	*list;

	list = output_to_llist();
	size = ft_list_size(list);
	array = malloc(size + 1);
	while (list != NULL)
	{
		*array = list->data;
		array++;
		list = list->next;
	}
	*array = '\0';
	return (array - size);
}

t_bsqinfo	*get_information(char *array)
{
	t_bsqinfo *info;

	info = malloc(sizeof(t_bsqinfo));
	info->lines = array[0];
	info->empty = array[1];
	info->obstacle = array[2];
	info->full = array[3];
	return (info);
}

int			get_width(char *array)
{
	int width;

	width = 0;
	while (*array != '\n')
	{
		array++;
	}
	array++;
	while (*array != '\n')
	{
		width++;
		array++;
	}
	return (width);
}

char		**get_table(char *array, int width, int height)
{
	char		**table;
	int			i;
	int 		j;

	i = 0;
	j = 0;
	while (*array != '\n')
	{
		array++;
	}
	array++;
	table = malloc(sizeof(char*) * height);
	while (i < height)
	{
		table[i] = malloc(sizeof(char) * (width + 1));
		i++;
	}
	i = 0;
	while (*array != '\0')
	{
		if (*array != '\n')
		{
			table[i][j] = *array;
			j++;
			array++;
		}
		else
		{
			table[i][j] = '\0';
			i++;
			j = 0;
			array++;
		}
	}
	return (table);
}

int         main(void)
{
	char        *array;
	t_bsqinfo   *info;
	char        **table;
	int			width;
	int 		height;

	array = from_llist_to_arr();
	info = get_information(array);
	height = info->lines - '0';
	width = get_width(array);
	table = get_table(array, width, height);

	return (0);
}
