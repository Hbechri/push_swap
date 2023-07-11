/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:23:14 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 19:33:33 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_nbrs(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

void	three_nbrs(t_stack **a)
{
	int	nbr;

	nbr = (*a)->nbr;
	if ((nbr > (*a)->next->nbr) && (nbr < (*a)->next->next->nbr))
		sa(a);
	else if ((nbr < (*a)->next->nbr) && (nbr > (*a)->next->next->nbr))
		rra(a);
	else if ((nbr < (*a)->next->nbr) && (nbr < (*a)->next->next->nbr))
	{
		if ((*a)->next->nbr > (*a)->next->next->nbr)
		{
			rra(a);
			sa(a);
		}
	}
	else if ((nbr > (*a)->next->nbr) && (nbr > (*a)->next->next->nbr))
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

void	four_or_five_nbrs(t_stack **a, t_stack **b)
{
	int	i;

	while (ft_lstsize(*a) > 3 && ft_lstsize(*a) < 6)
	{
		i = small_nbr(*a);
		while (i != (*a)->nbr)
		{
			if (nbr_position(*a, i) > ft_lstsize(*a) / 2)
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	three_nbrs(a);
	while (*b)
		pa(a, b);
}
