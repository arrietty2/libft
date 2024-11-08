/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:56:34 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/01 15:19:09 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_1st_index(char const *s1, char const *set, int i)
{
	int	k;

	k = 0;
	while (set[k])
	{
		if (s1[i] == set[k])
		{
			i++;
			k = 0;
		}
		k++;
	}
	return (i);
}
static int	find_2nd_index(char const *s1, char const *set, int j)
{
	int	k;

	k = 0;
	while (set[k])
	{
		if (s1[j] == set[k])
		{
			j--;
			k = 0;
		}
		k++;
	}
	return (j);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	char *p;

	i = find_1st_index(s1, set, 0);
	j = find_2nd_index(s1, set, ft_strlen(s1));
	k = 0;
	if (!(p = (char *)malloc(j - i + 2)))
		return (NULL);
	while (s1[i] && i <= j)
		p[k++] = s1[i++];
	p[k] = 0;
	return (p);
}