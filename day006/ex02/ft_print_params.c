/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:07:58 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 14:34:21 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*argument;
	int		index_argument;

	index_argument = 1;
	while (index_argument < argc)
	{
		argument = argv[index_argument];
		while (*argument != '\0')
		{
			ft_putchar(*argument);
			argument++;
		}
		index_argument++;
		ft_putchar('\n');
	}
	return (0);
}
