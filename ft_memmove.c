/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:21:38 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/28 22:39:16 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*srcpy;
	char	*destcpy;

	srcpy = (char *)src;
	destcpy = (char *)dest;
	if (dest >= src && dest < src + n)
	{
		while (n--)
			destcpy[n] = srcpy[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
#include <stdio.h>
int	main(void){
	char haru[] = "gyroisadog";
	char *dest = &haru[4];
	ft_memmove(dest, haru, 5);
	printf("%s\n",dest);
}