/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:56:34 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/17 18:12:30 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_1st_index(char const *s1, char const *set, size_t i)
{
	size_t	k;

	k = 0;
	while (set[k])
	{
		if (s1[i] != set[k])
			k++;
		else if (s1[i] == set[k])
		{
			i++;
			k = 0;
		}
	}
	return (i);
}

static size_t	find_2nd_index(char const *s1, char const *set, size_t j)
{
	size_t	k;

	k = 0;
	while (set[k])
	{
		if (s1[j] != set[k])
			k++;
		else if (s1[j] == set[k])
		{
			j--;
			k = 0;
		}
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = find_1st_index(s1, set, 0);
	j = find_2nd_index(s1, set, ft_strlen(s1) - 1);
	k = 0;
	p = (char *)malloc(j - i + 2);
	if (!p)
		return (NULL);
	while (s1[i] && i <= j)
		p[k++] = s1[i++];
	p[k] = 0;
	return (p);
}
