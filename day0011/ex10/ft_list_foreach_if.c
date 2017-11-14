/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:09:24 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 16:12:54 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list *current_element;

	current_element = begin_list;
	if (current_element)
	{
		while (current_element != NULL)
		{
			if (((*cmp)(current_element->data, data_ref)) == 0)
			{
				(*f)(current_element->data);
			}
			current_element = current_element->next;
		}
	}
}
