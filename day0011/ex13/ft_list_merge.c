/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:15:43 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 18:01:45 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *element1;
	t_list *first;

	first = *begin_list1;
	element1 = *begin_list1;
	while (element1 != NULL)
	{
		element1 = element1->next;
	}
	element1 = begin_list2;
	begin_list2 = first;
}
