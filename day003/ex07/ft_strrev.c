/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 09:24:13 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/27 14:01:52 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char *ft_strrev(char *str) {
    int len;

    len = ft_strlen(str);
    printf("%i", len);
    i = *str;
    str = str + len;


}

int main() {
    char fr[]= "hola";

    ft_strrev(fr);
    return 0;
}
