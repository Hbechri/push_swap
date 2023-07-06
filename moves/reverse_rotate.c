/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:18:12 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/05 23:18:50 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **list_stack)
{
	t_stack	*ptr;
	t_stack	*last_node;
	t_stack	*before_last;

	if (list_stack == NULL || (*list_stack)->next == NULL)
		return ;
	last_node = *list_stack;
	while (last_node->next != NULL)
	{
		before_last = last_node;
		last_node = last_node->next;
	}
	before_last->next = NULL;
	last_node->next = *list_stack;
	*list_stack = last_node;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
