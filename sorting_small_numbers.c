/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:23:14 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/06 14:46:21 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	sort_three(t_stack **a)
{
	if (((*a)->nbr > (*a)->next->nbr)
		&& ((*a)->nbr < (*a)->next->next->nbr))
		sa(a);
	else if (((*a)->nbr < (*a)->next->nbr)
		&& ((*a)->nbr > (*a)->next->next->nbr))
		rra(a);
	else if (((*a)->nbr < (*a)->next->nbr) && ((*a)->nbr < (*a)->next->next->nbr))
	{
		if ((*a)->next->nbr > (*a)->next->next->nbr)
		{
			rra(a);
			sa(a);
		}
	}
	else if (((*a)->nbr > (*a)->next->nbr)
		&& ((*a)->nbr > (*a)->next->next->nbr))
	{
		if ((*a)->next->nbr < (*a)->next->next->nbr)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	sort_four_and_five(t_stack **a, t_stack **b)
{
	int	i;

	while (ft_lstsize(*a) > 3 && ft_lstsize(*a) < 6)
	{
		i = find_min_nb(*a);
		while (i != (*a)->nbr)
		{
			if (get_pos_nb(*a, i) > ft_lstsize(*a) / 2)
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
