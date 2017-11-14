/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:49:31 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 12:47:25 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*to_return;
	unsigned int	count;
	t_list			*current_element;

	count = 0;
	current_element = begin_list;
	if (!current_element)
		return (NULL);
	else
	{
		while (count < nbr)
		{
			if (current_element->next == NULL)
				return (NULL);
			current_element = current_element->next;
			count++;
		}
	}
	to_return = current_element;
	return (to_return);
}
