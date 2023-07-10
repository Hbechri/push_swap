/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrs_checker_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:57:44 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:14:32 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
