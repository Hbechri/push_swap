/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:16:01 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/09 15:46:56 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
 
int	sorted_stack(t_stack *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next != NULL)
	{
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	moves_checker(t_stack **a, t_stack **b, char *str)
{
	if (!ft_strcmp(str, "sa\n"))
		sa(a);
	else if (!ft_strcmp(str, "sb\n"))
		sb(b);
	else if (!ft_strcmp(str, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(str, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(str, "pb\n"))
		pb(a, b);
	else if (!ft_strcmp(str, "ra\n"))
		ra(a);
	else if (!ft_strcmp(str, "rb\n"))
		rb(b);
	else if (!ft_strcmp(str, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(str, "rra\n"))
		rra(a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(a, b);
	else
		error_msg();
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
		read_from_input(&a, &b);
		if (sorted_stack(a) && b == NULL)
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
}
