/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 10:20:02 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/12 11:18:54 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int eval_expr(char *str)
{
	if (*str != '(')
	{
		return (eval_expr(str + 1))
	}
	if (*str == '(')
	{
		if (*str != '(')
		{
			
		}
	}

	return (*str);
}


int main(int argc, char **argv)
{
	char *argument;

	argument = argv[1];
	if (argc == 2)
	{
		printf("%i", eval_expr(argument));
	}
	return (0);
}
