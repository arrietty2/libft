/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmtioui <hmtioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:45:53 by hmtioui           #+#    #+#             */
/*   Updated: 2024/11/10 15:22:12 by hmtioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp)
		temp = temp->next;
	temp->next = new;

}
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	ft_lstnew(&node1);
	ft_lstnew(&node2);
	ft_lstnew(&node3);
	ft_lstadd_back(node1, node2);
}