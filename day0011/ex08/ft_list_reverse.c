/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:19:07 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 12:46:50 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *last_element;
	t_list *current_element;
	t_list *temp;

	last_element = *begin_list;
	if (last_element)
	{
		current_element = last_element->next;
		last_element->next = NULL;
		while (current_element != NULL)
		{
			temp = current_element->next;
			current_element->next = last_element;
			last_element = current_element;
			current_element = temp;
		}
	}
	*begin_list = last_element;
}
