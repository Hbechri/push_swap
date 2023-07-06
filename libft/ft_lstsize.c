/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:21:19 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/06 18:26:50 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *stack_a)
{
	int	i;

	i = 0;
	if (!stack_a)
		return (0);
	while (stack_a != NULL)
	{
		stack_a = stack_a -> next;
		i++;
	}
	return (i);
}
