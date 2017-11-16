/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:32:12 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 21:27:57 by jsoutelo         ###   ########.fr       */
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
	int i;

	i = 0;
	info = malloc(sizeof(t_bsqinfo));
	info->lines = ft_atoi(array);
	while (*array >= '0' && *array <= '9')
	{
		i++;
		array++;
	}
	array = array - i;
	info->empty = array[i++];
	info->obstacle = array[i++];
	info->full = array[i];
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
	int			j;

	i = 0;
	j = 0;
	while (*array != '\n')
		array++;
	array++;
	table = malloc(sizeof(char*) * height);
	while (i < height)
		table[i++] = malloc(sizeof(char) * (width + 1));
	i = 0;
	while (*array != '\0')
	{
		if (*array != '\n')
			table[i][j++] = *array;
		else
		{
			table[i++][j] = '\0';
			j = 0;
		}
		array++;
	}
	return (table);
}
