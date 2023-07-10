/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:16:34 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/08 17:05:44 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	rotate(t_stack **list_stack)
{
	t_stack	*ptr;
	t_stack	*last_node;

	if (*list_stack == NULL || (*list_stack)->next == NULL)
		return ;
	ptr = *list_stack;
	*list_stack = (*list_stack)->next;
	last_node = *list_stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = ptr;
	ptr->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
