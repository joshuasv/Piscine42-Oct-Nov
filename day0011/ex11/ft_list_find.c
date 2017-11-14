/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:13:46 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 16:35:49 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *current_element;

	current_element = begin_list;
	if (current_element)
	{
		while (current_element != NULL)
		{
			if ((*cmp)(current_element->data, data_ref) == 0)
			{
				return (current_element);
			}
			current_element = current_element->next;
		}
	}
	return (NULL);
}
