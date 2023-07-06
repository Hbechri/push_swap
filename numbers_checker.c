/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:27:42 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/05 21:54:20 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_position(t_stack *a, int nb)
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

void	valid_number(char **str)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			check = ft_isdigit(str[i][++j]);
			if (!check)
				error_msg();
		}
		while (str[i][j])
		{
			check = ft_isdigit(str[i][j]);
			if (!check)
				error_msg();
			j++;
		}
		i++;
	}
}

void	duplicated_number(t_stack *a)
{
	int	*str;
	int	size;
	int	i;
	int	j;

	i = 0;
	str = create_array_from_stack_a(a);
	size = ft_lstsize(a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
			{
				ft_putstr_fd("ERROR: Duplicate Numbers Found\n", 2);
				exit (1);
			}
			j++;
		}
		i++;
	}
	free (str);
}

int	find_max_nb(t_stack *stack)
{
	int	max_nb;
	int	max_index;
	int	i;

	i = 0;
	max_index = 0;
	max_nb = stack->nbr;
	while (stack)
	{
		if (max_nb < stack->nbr)
		{
			max_nb = stack->nbr;
			max_index = i;
		}
		stack = stack->next;
		i++;
	}
	return (max_index);
}

int	find_min_nb(t_stack *stack)
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
