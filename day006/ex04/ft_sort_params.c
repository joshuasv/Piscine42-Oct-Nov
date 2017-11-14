/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:56:28 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 14:34:55 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != 0 || s2[index] != 0)
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		else if (s1[index] > s2[index])
		{
			return (1);
		}
		else if (s1[index] == s2[index])
		{
			index++;
		}
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		index;
	int		looper;
	char	*placeholder;

	index = 1;
	while (index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			placeholder = argv[index];
			argv[index] = argv[index + 1];
			argv[index + 1] = placeholder;
			index = 0;
		}
		index++;
	}
	looper = 1;
	while (looper < argc)
	{
		ft_putstr(argv[looper]);
		ft_putchar('\n');
		looper++;
	}
	return (0);
}
