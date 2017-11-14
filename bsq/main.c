/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:32:12 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/13 22:25:55 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list *begin_list, char data);


/*
 * This function makes a linked list with all the output characters.
 *
 * @return	size of list
 * */
t_list *output_to_llist(t_list *begin_list)
{
	char ch;
	int row;
	int column;
	t_list *element;
	t_list *first;

	row = 0;
	column = 0;
	element = begin_list;
	element = ft_create_elem(0);
	first = element->next;
	while (read(0, &ch, 1) > 0)
	{
		if (ch == '\n')
			row++;
		else
			column++;
		ft_list_push_back(element, ch);
	}
	return (first);
}


int main()
{
	t_list *list = NULL;

	list = output_to_llist(list);
	printf("%c", list->data);
	
	return (0);

}
