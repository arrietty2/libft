/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:04:27 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/17 14:55:53 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;

	ptr = (const unsigned char *)s;
	while (*ptr != (unsigned char)c)
	{
		if (*ptr == 0)
			return (NULL);
		ptr++;
	}
	return ((void *)ptr);
}
