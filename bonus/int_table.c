/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:00:55 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/09 12:02:54 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
