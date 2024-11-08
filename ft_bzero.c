/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:58:39 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/28 22:47:31 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char haru[10];
// 	bzero(haru, 2);
// 	int i = 0;
// 	while (i<2){
// 		if(haru[i] == 0)
// 			printf("NULL ");
// 		i++;
// 	}
// }