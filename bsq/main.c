/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:32:25 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/14 23:20:55 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int         main(void)
{
	char		*array;
	t_bsqinfo   *info;
	char        *table;
	
	array = from_llist_to_arr();
	info = get_information(array);
	table = get_table(array);
	
	return (0);
}
				 
