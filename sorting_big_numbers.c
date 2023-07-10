/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:46:10 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:08:30 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	*fill_tab(t_stack *a)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(a);
	tab = malloc(sizeof(int) * size);
	while (a)
	{
		tab[i] = a->nbr;
		a = a->next;
		i++;
	}
	return (sort_int_tab(tab, size));
}

void	big_nbr_to_top(t_stack **stack)
{
	int	index;
	int	size;

	while (1)
	{
		index = big_nbr_index(*stack);
		size = ft_lstsize(*stack);
		if (index == 0)
			break ;
		if (index > size / 2)
			rrb(stack);
		else if (index <= size / 2)
			rb(stack);
	}
}

void	push_table_to_b(t_stack **a, t_stack **b, int *tab, int chank)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->nbr <= tab[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->nbr > tab[i] && (*a)->nbr <= tab[chank + i])
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	more_than_five_nbrs(t_stack **a, t_stack **b, int chank)
{
	int	*tab;

	tab = fill_tab(*a);
	push_table_to_b(a, b, tab, chank);
	while (*b)
	{
		big_nbr_to_top(b);
		pa(a, b);
	}
	free (tab);
}
