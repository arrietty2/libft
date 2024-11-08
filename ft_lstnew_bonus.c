/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:00:06 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/07 14:50:48 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
    if(content == NULL)
        return NULL;
	node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
	node->content = content;
    node->next = NULL;
	return (node);
}

int main(){
    int i = 3;
    t_list *node = ft_lstnew(&i);
   printf("%d",*(int *)node->content);
}
