/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:29:56 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/15 23:02:58 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

typedef struct		s_info
{
	int				lines;
	char			empty;
	char			obstacle;
	char			full;
}					t_bsqinfo;


char				**al_square(char **table, int width, int height);
char				**al_adding(char **table, int width, int height);
char				**al_border(char **table, int width, int height, char obstacle);
int					get_width(char *array);
char				**get_table(char *array, int width, int heigth);
t_bsqinfo			*get_information(char *array);
char				*from_llist_to_arr(void);
t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
int					ft_list_size(t_list *begin_list);
int					ft_atoi(const char *str);
#endif
