/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrs_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:57:56 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/09 15:50:31 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_position(t_stack *a, int nb)
{
	int	i;

	i = 0;
	while (a->nbr != nb)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	valid_nbr(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
			j++;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				invalid_nbr_error();
			j++;
		}
		i++;
	}
}

void	duplicated_nbr(t_stack *a)
{
	int	*str;
	int	size;
	int	i;
	int	j;

	i = 0;
	str = stack_to_array(a);
	size = ft_lstsize(a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				duplicated_nbr_error();
			j++;
		}
		i++;
	}
	free (str);
}

int	big_nbr_index(t_stack *stack)
{
	int	big_nbr;
	int	index;
	int	i;

	i = 0;
	index = 0;
	big_nbr = stack->nbr;
	while (stack)
	{
		if (big_nbr < stack->nbr)
		{
			big_nbr = stack->nbr;
			index = i;
		}
		stack = stack->next;
		i++;
	}
	return (index);
}

int	small_nbr(t_stack *stack)
{
	int	i;

	i = stack->nbr;
	while (stack)
	{
		if (i > stack->nbr)
			i = stack->nbr;
		stack = stack->next;
	}
	return (i);
}
