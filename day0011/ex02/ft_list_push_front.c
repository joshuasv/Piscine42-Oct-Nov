/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:48:47 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/12 13:45:09 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_element;
	t_list *current_element;

	new_element = ft_create_elem(data);
	current_element = *begin_list;
	if (!(*begin_list))
	{
		*begin_list = new_element;
	}
	else
	{
		new_element->next = *begin_list;
		*begin_list = new_element;
	}
}
