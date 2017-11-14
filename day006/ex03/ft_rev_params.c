/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:51:06 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 15:47:30 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char	*argument;
	int		index_argument;

	index_argument = argc - 1;
	while (index_argument > 0)
	{
		argument = argv[index_argument];
		while (*argument != '\0')
		{
			ft_putchar(*argument);
			argument++;
		}
		index_argument--;
		ft_putchar('\n');
	}
	return (0);
}
