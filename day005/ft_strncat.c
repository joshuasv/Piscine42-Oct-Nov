/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:14:43 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 16:20:04 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int length(char *src)
{
	int len;
	
	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
}

char *ft_strncat(char *dest, char *src, int nb)
{
	int index;

	index = 0;
	
}