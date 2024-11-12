/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:44:28 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/12 21:17:51 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(long n)
{
	int	i;

	i = 1;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int     l;
	long    nb;
	char    *p;

	nb = n;
	l = nbrlen(nb);
	p = (char *)malloc(l * sizeof(char));
	if (!p)
		return (NULL);
	p[--l] = '\0';
	if (nb == 0)
	{
		p[0] = '0';
		return (p);
	}
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		p[--l] = nb % 10 + '0';
		nb /= 10;
	}
	return (p);
}