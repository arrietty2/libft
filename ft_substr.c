/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:15:42 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/31 18:39:42 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	size_t i;

	i = 0;
	while (s[start + i] && i < len)
		i++;
	if (!(subs = (char *)malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = 0;
	return (subs);
}