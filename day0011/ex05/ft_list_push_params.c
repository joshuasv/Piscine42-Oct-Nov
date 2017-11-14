/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:38:07 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/08 15:21:40 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*add_element(t_list *list, void *data)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = list;
	}
	return (temp);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		index;

	index = 2;
	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[1]);
	while (index < ac)
		list = add_element(list, av[index++]);
	return (list);
}
