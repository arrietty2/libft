/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:41:50 by hmtioui           #+#    #+#             */
/*   Updated: 2024/10/31 18:56:02 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ss;
	int len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ss = (char *)malloc(len)))
		return (NULL);
	ft_strlcpy(ss, s1, ft_strlen(s1) + 1);
	ft_strlcat(ss, s2, len);
	return (ss);
}