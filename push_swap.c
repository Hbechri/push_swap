/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:08:36 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:07:13 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (sorted_stack(*a))
		exit (0);
	if (size == 2 && !sorted_stack(*a))
		two_nbrs(a);
	else if (size == 3 && !sorted_stack(*a))
		three_nbrs(a);
	else if (size > 3 && size < 6 && !sorted_stack(*a))
		four_or_five_nbrs(a, b);
	else if (size <= 100 && !sorted_stack(*a))
		more_than_five_nbrs(a, b, 13);
	else if (size <= 500 && !sorted_stack(*a))
		more_than_five_nbrs(a, b, 34);
}

char	*join_nbrs(char **str)
{
	int		i;
	int		j;
	char	*nbrs;

	i = 1;
	nbrs = ft_strdup("");
	while (str[i])
	{
		j = 0;
		while (str[i][j] == ' ')
			j++;
		if (!str[i][j])
			no_nbrs_error();
		nbrs = ft_strjoin(nbrs, str[i]);
		nbrs = ft_strjoin(nbrs, " ");
		i++;
	}
	return (nbrs);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**str;
	char	*nbrs;

	if (ac >= 2)
	{
		nbrs = join_nbrs(av);
		str = ft_split(nbrs, ' ');
		free (nbrs);
		valid_nbr(str);
		fill_stack(&a, str);
		sort_stack(&a, &b);
	}
}
