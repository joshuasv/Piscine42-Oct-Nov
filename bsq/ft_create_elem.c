/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:31:32 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/14 21:13:48 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(char data)
{
	t_list *new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->data = data;
		new_element->next = NULL;
	}
	return (new_element);
}

