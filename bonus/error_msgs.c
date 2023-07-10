/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:49:22 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:13:57 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	moves_error(void)
{
	ft_putstr_fd("Error: Invalid move\n", 2);
	exit (1);
}

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

void	max_int_error(void)
{
	ft_putstr_fd("Error: Number is to bigger than int max/min\n", 2);
	exit (1);
}

void	no_nbrs_error(void)
{
	ft_putstr_fd("Error: No Numbers Provided\n", 2);
	exit (1);
}
