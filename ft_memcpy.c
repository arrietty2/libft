/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:23:53 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/24 16:23:55 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstcpy;

	dstcpy = (unsigned char *)dst;
	while (n--)
		*dstcpy++ = (unsigned char)src++;
	return (dst);
}
/*#include <stdio.h>
int	main(void){
	char haru[] = "haha";
	char dest[5];
	dest[4] = 0;
	memcpy(dest, haru, 4);
	printf("%s\n",dest);
}*/