/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:18:56 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/14 19:24:10 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}
