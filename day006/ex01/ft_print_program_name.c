/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 11:00:34 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 00:19:45 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char *argument;

	argument = argv[0];
	while (*argument != '\0')
	{
		ft_putchar(*argument);
		argument++;
	}
	ft_putchar('\n');
	return (0);
}
