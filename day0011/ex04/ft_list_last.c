/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:21:50 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/07 16:36:31 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *current_element;

	current_element = begin_list;
	if (!current_element)
	{
		return (NULL);
	}
	else
	{
		while (current_element->next != NULL)
		{
			current_element = current_element->next;
		}
		return (current_element);
	}
}
