/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:11:24 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/08 17:06:16 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
}

void	sb(t_stack **b)
{
	swap(*b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(*a);
	swap(*b);
}
