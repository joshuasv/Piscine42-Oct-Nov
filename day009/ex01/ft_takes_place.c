/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:16:14 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 20:38:52 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char get_hour(int hour)
{
	char number[5];
	char digit;
	while (hour > 0)
	{
		digit = hour % 10 + '0';
	}
	number = 
}


void ft_takes_place(int hour)
{
	printf("%c", get_hour(hour));
}
	int main()
{
	ft_takes_place(0103);
	return 0;
}
