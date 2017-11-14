/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:59:18 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/06 17:41:57 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_any(char **tab, int(*f)(char*));
int ft_count_if(char **tab, int(*f)(char*));

void ft_printf_ex01(int n)
{
	printf("%i ", n);
	return ;
}

int ft_ex02(int n)
{
	return n + 1;
}

int ft_ex03(char c)
{
	if (c - '0' == 1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int index;
	int ex01_ex02[] = {1, 2, 3, 4, 5, 6};
	int *ex02;
	char **ex03[] = {"1", "3", "7"};

	index = 0;
	printf("ex01: ");
	ft_foreach(ex01_ex02, 6, &ft_printf_ex01);
	printf("\nex02: ");
	ex02 = ft_map(ex01_ex02, 6, &ft_ex02);
	while (index < 6)
	{
		printf("%i ", ex02[index]);
		index++;
	}
	printf("%i", ft_any(ex03, &ft_ex03)); 

	return 0;

}
			 
