/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:43:01 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/06 18:26:42 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*ptr;

	if (!lst)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = new;
	}
}
