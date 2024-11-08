/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:17:48 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/28 22:49:13 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bcpy;

	bcpy = (unsigned char *)b;
	while (len--)
		*bcpy++ = (unsigned char)c;
	return (b);
}

#include <stdio.h>
// int	main(void)
// {
// 	int haru = 3123123, *p;
	
// 	haru = 0;
// 	p = &haru;
// 	ft_memset(p, 57, 1);
// 	ft_memset((char *)p + 1, 5, 1);
// 	printf("%d\n",haru);
// }