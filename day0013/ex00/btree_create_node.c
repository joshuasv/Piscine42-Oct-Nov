/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:40:40 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/10 22:58:58 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = NULL;
	new_node = malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->right = 0;
		new_node->left = 0;
		new_node->data = item;
	}
	return (new_node);
}
