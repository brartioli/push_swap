/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:35:13 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/11 17:22:18 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		main(int argc, char *argv[]);
long	ft_atoil(const char *nptr);
int		check_is_letter(char *str, char **arg);
int		repeat_number(t_stack *a, int number);
t_stack	*add_node(t_stack **lst, t_stack *new);
t_stack	*last_node(t_stack *lst);
t_stack	*add_last(t_stack **stack, t_stack *new);
t_stack	*lstsize(t_stack *lst);
void	ft_exit_error(t_stack **a, char **args);
void	free_split(char **split);
void	swap(t_stack **stack);
void	push(t_stack **src, t_stack **dst);
void	reverse_rotate(t_stack **stack);
void	rotate(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **stack);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	index_stack(t_stack **a);
void	free_stack(t_stack **stack);
int		already_sorted(t_stack *a);
void	one_element(t_stack *a);
void	two_element(t_stack *a, t_stack *b);

#endif
