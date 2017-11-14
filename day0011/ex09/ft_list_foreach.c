/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:48:10 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 16:32:39 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *current_element;

	current_element = begin_list;
	if (current_element)
	{
		while (current_element != NULL)
		{
			(*f)(current_element->data);
			current_element = current_element->next;
		}
	}
}
