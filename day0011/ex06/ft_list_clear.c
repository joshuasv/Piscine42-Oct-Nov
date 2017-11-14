/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:28:30 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 10:48:50 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *current_element;
	t_list *temp;

	current_element = *begin_list;
	while (current_element->next != NULL)
	{
		temp = current_element;
		current_element = current_element->next;
		free(temp);
	}
	*begin_list = NULL;
}
