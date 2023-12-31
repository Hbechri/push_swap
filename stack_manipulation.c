/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:45:10 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/09 15:48:21 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_stack *a)
{
	int	*str;
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(a);
	str = malloc(sizeof(int) * size);
	while (a)
	{
		str[i] = a->nbr;
		a = a->next;
		i++;
	}
	return (str);
}

void	fill_stack(t_stack **a, char **str)
{
	int			i;
	long int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		nbr = ft_atoi(str[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			max_int_error();
		ft_lstadd_back(a, ft_lstnew(nbr));
		i++;
	}
	duplicated_nbr(*a);
}

int	sorted_stack(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}
