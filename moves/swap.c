/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:11:24 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/05 23:12:33 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack *ptr)
{
	int	tmp;

	if (ptr == NULL || ptr->next == NULL)
		return ;
	tmp = ptr->nbr;
	ptr->nbr = ptr->next->nbr;
	ptr->next->nbr = tmp;
}

void	sa(t_stack **a)
{
	swap(*a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b)
{
	swap(*b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(*a);
	swap(*b);
	ft_putstr_fd("ss\n", 1);
}
