/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:43:51 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/01 22:45:27 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

void	*ft_strlen(const char *s)
{
	void *p;
	
	int i;
	p = &i;
	i = 0;
	while (s[i])
		i++;
	return (p);
}

#include <stdio.h>

int main(){
	char h[] = "haru";
	int *a;
	a =(int *)ft_strlen(h);
	printf("%d",*a);
}