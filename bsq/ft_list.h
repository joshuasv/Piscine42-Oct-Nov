/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:29:56 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 12:50:46 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

typedef struct		s_info
{
	char			lines;
	char			empty;
	char			obstacle;
	char			full;
}					t_bsqinfo;

char				**get_table(char *array, int width, int heigth);
t_bsqinfo			*get_information(char *array);
char				*from_llist_to_arr(void);
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
int					ft_list_size(t_list *begin_list);
#endif
