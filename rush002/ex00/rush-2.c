/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:49:41 by ralee             #+#    #+#             */
/*   Updated: 2017/11/13 22:19:01 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list *begin_list, char data);
int		ft_strncmp(char *s1, char *s2, int n);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

int		main()
{
	char	ch;
	int		row; 
	int		column;
	t_list 	*begin_list;
	t_list	*element;
	int		size_list;
	char	*output;
	char	*cmp00;
	char	*cmp01;
	char	*cmp02;
	char	*cmp03;
	char	*cmp04;

	size_list = 0;
	row = 0;
	column = 0;
	begin_list = ft_create_elem(0);
	while(read(0, &ch, 1) > 0)
	{
		if(ch == '\n')
			row++;
		else
			column++;
		ft_list_push_back(begin_list, ch);
	}
	element = begin_list->next;	
	size_list = column + row;
	output = malloc(size_list + 1);
	
	while (element->next != NULL)
	{
		*output = element->data;
		element = element->next;
		output++;
	}
	begin_list = begin_list->next;
	*output = '\0';	
	output = output - size_list + 1;
	column /= row;
	cmp00 = rush00(column, row);
	cmp01 = rush01(column, row);
	cmp02 = rush02(column, row);
	cmp03 = rush03(column, row);
	cmp04 = rush04(column, row);

	//printf("%s\n", output);
	printf("%s\n", cmp00);

//	ft_strncmp(output, cmp00, (column * row) + row);
//	ft_strncmp(output, cmp01, size_list - 1);
//	ft_strncmp(output, cmp02, size_list - 1);
//	ft_strncmp(output, cmp03, size_list - 1);
//	ft_strncmp(output, cmp04, size_list - 1);
	//printf("OUT:\n%s", output);
	//printf("00: %i\n01: %i\n02: %i\n03: %i\n04: %i", ft_strcmp(output, cmp00), ft_strcmp(output, cmp01), ft_strcmp(output, cmp02), ft_strcmp(output, cmp03), ft_strcmp(output, cmp04));
/*
	printf("00: %s", rush00(column, row));	
	printf("01: %s", rush01(column, row));	
	printf("02: %s", rush02(column, row));	
	printf("03: %s", rush03(column, row));	
	printf("04: %s", rush04(column, row));	
*/
	return (0);
}

