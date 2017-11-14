/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 16:15:22 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 16:25:06 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src, int jump)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	if (jump == 1)
	{
		dest[dest_size] = '\n';
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (dest);
}

int		arg_len(int argc, char **argv)
{
	int		len;
	char	*arguments;
	int		arg;
	int		index_arg;

	len = 0;
	arg = 1;
	index_arg = 0;
	while (arg <= argc)
	{
		arguments = argv[index_arg];
		len += ft_strlen(arguments);
		arg++;
		index_arg++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*arguments;
	int		len;
	int		index;

	len = arg_len(argc, argv) + (argc - 1);
	*argv = malloc(sizeof(char) * (len + 1));
	index = 1;
	arguments = *argv;
	if (argc < 2)
	{
		return ("");
	}
	while (index < argc - 1)
	{
		ft_strcat(arguments, argv[index], 1);
		index++;
	}
	ft_strcat(arguments, argv[index], 0);
	arguments[len] = '\0';
	return (arguments);
}
