/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:00:29 by hbechri           #+#    #+#             */
/*   Updated: 2023/07/10 15:08:05 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}					t_stack;

//LIBFT
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int nbr);
int		ft_lstsize(t_stack *stack_a);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);

//ERRORS
void	invalid_nbr_error(void);
void	duplicated_nbr_error(void);
void	max_int_error(void);
void	no_nbrs_error(void);

//PUSH_SWAP
int		nbr_position(t_stack *a, int nb);
void	valid_nbr(char **str);
void	duplicated_nbr(t_stack *a);
int		big_nbr_index(t_stack *stack);
int		small_nbr(t_stack *stack);
void	sort_stack(t_stack **a, t_stack **b);
char	*join_nbrs(char **str);
int		*sort_int_tab(int *tab, int size);
int		*fill_tab(t_stack *a);
void	big_nbr_to_top(t_stack **stack);
void	push_table_to_b(t_stack **a, t_stack **b, int *tab, int chank);
void	more_than_five_nbrs(t_stack **a, t_stack **b, int chank);
void	two_nbrs(t_stack **a);
void	three_nbrs(t_stack **a);
void	four_or_five_nbrs(t_stack **a, t_stack **b);
int		*stack_to_array(t_stack *a);
void	fill_stack(t_stack **a, char **str);
int		sorted_stack(t_stack *stack);

//moves
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

#endif