/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:21:01 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/05 18:02:32 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*)){
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	    f(i, &s[i++]);
}
