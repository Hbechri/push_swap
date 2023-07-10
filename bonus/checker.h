/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:18:30 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:12:55 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}					t_stack;

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

long	ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int nbr);
int		ft_lstsize(t_stack *stack_a);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);

void	moves_error(void);
void	invalid_nbr_error(void);
void	duplicated_nbr_error(void);
void	max_int_error(void);
void	no_nbrs_error(void);

int		sorted_stack(t_stack *stack);
void	moves_checker(t_stack **a, t_stack **b, char *str);
char	*join_nbrs(char **str);
int		*fill_tab(t_stack *a);
void	valid_nbr(char **str);
void	duplicated_nbr(t_stack *a);
void	read_from_input(t_stack **a, t_stack **b);
int		*stack_to_array(t_stack *a);
void	fill_stack(t_stack **a, char **str);

#endif