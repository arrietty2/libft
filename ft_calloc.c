/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:36:42 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/17 15:31:11 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	p = (unsigned char *)malloc(count * size);
	if (!p)
		return (NULL);
	bzero(p, count * size);
	return (p);
}
