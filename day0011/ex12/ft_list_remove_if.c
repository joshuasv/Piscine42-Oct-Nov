/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:36:34 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 20:38:51 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current_element;
	int		is_first;
	t_list	*previous;
	t_list	*next;

	is_first = 0;
	current_element = *begin_list;
	while (current_element != NULL)
	{
		next = current_element->next;
		if ((*cmp)(current_element->data, data_ref) == 0)
		{
			if (is_first == 0)
				*begin_list = current_element->next;
			else if (current_element->next == NULL)
				previous->next = NULL;
			else
				previous->next = current_element->next;
			free(current_element);
		}
		is_first++;
		previous = current_element;
		current_element = next;
	}
}
