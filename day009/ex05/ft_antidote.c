/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:15:57 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/03 16:52:21 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min(int i, int j, int k)
{
	if (i <= j && i <= k)
		return (i);
	if (j <= i && j <= k)
		return (j);
	if (k <= j && k <= i)
		return (k);
	return (0);
}

int	max(int i, int j, int k)
{
	if (i >= j && i >= k)
		return (i);
	if (j >= i && j >= k)
		return (j);
	if (k >= j && k >= i)
		return (k);
	return (0);
}

int midd(int i, int j, int k)
{
	int maximo;
	int minimo;

	maximo = max(i, j, k);
	minimo = min(i, j, k);
	if (maximo == j)
	{
		if (minimo == i)
			return (k);
		else
			return (i);
	}
	else if(maximo == i)
	{
		if(minimo == j)
			return (k);
		else
			return (j);
	}
	else if (maximo == k)
	{
		if (minimo == i)
			return (j);
		else
			return (i);
	}
}

int ft_antidote(int i, int j, int k)
{
		
	return (midd(i, j, l));
}
