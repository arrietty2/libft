/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:23:24 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/26 14:48:31 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	int i;

	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = &s[i];
		i++;
	}
	if (c == 0)
		return (&s[i]);
	return (ptr);
}