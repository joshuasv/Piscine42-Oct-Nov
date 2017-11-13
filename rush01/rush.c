/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 19:06:17 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/05 17:31:20 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	argument_length(char **argv, int argument_index)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (argv[argument_index][i] != '\0')
	{
		len++;
		i++;
	}
	if (len == 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	assign(int **sudoku_table, char **argv, int argc)
{
	int height;
	int width;
	int arg;

	height = 0;
	arg = 1;
	while (arg < argc && height < 9)
	{
		width = 0;
		if (argument_length(argv, arg) == 0)
			return (0);
		while (argv[arg][width] != '\0' && width < 9)
		{
			if (argv[arg][width] >= '1' && argv[arg][width] <= '9')
				sudoku_table[height][width] = argv[arg][width] - '0';
			else if (argv[arg][width] == '.')
				sudoku_table[height][width] = 0;
			else
				return (0);
			width++;
		}
		height++;
		arg++;
	}
	return (1);
}

int	**fill_parameters(int argc, char **argv)
{
	int i;
	int **sudoku_table;

	i = 0;
	sudoku_table = malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		sudoku_table[i] = malloc(sizeof(int) * 9);
		i++;
	}
	if (argc != 10)
		return (0);
	if (assign(sudoku_table, argv, argc) == 0)
		return (0);
	return (sudoku_table);
}

int	main(int argc, char **argv)
{
	int **sudoku_table;
	int printx;
	int printy;

	printy = 0;
	if (fill_parameters(argc, argv) == 0)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	sudoku_table = fill_parameters(argc, argv);
	while (printy < 9)
	{
		printx = 0;
		while (printx < 9)
		{
			printf(" %i", sudoku_table[printy][printx]);
			printx++;
		}
		printf("\n");
		printy++;
	}
	return (0);
}
