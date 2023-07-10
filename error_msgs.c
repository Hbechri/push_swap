/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:53:38 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 14:57:19 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	invalid_nbr_error(void)
{
	ft_putstr_fd("Error: Invalid number\n", 2);
	exit (1);
}

void	duplicated_nbr_error(void)
{
	ft_putstr_fd("Error: Duplicated number\n", 2);
	exit (1);
}

void	no_nbrs_error(void)
{
	ft_putstr_fd("Error: No Numbers Provided\n", 2);
	exit (1);
}

void	max_int_error(void)
{
	ft_putstr_fd("Error: Number is to bigger than int max/min\n", 2);
	exit (1);
}
