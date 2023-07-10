/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulation_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:04:04 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:18:24 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
	long int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = ft_atoi(str[i]);
		if (nb < INT_MIN || nb > INT_MAX)
			max_int_error();
		ft_lstadd_back(a, ft_lstnew(nb));
		i++;
	}
	duplicated_nbr(*a);
}
