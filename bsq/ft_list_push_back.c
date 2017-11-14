/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:48:38 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/12 14:46:55 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list *begin_list, char data)
{
	t_list *new_element;
	t_list *current_element;

	new_element = ft_create_elem(data);
	current_element = begin_list;
	if (!current_element)
		begin_list = new_element;
	else
	{
		while (current_element->next != NULL)
		{
			current_element = current_element->next;
		}
		current_element->next = new_element;
	}
}
