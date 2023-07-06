/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:45:10 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/06 09:31:32 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_array_from_stack_a(t_stack *a)
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
	long int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = ft_atoi(str[i]);
		if (nb < INT_MIN || nb > INT_MAX)
		{
			ft_putstr_fd("Error: Number Is Outside The Integer Range\n", 2);
			exit (1);
		}
		ft_lstadd_back(a, ft_lstnew(nb));
		i++;
	}
	duplicated_number(*a);
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
