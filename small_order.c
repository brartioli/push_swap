/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:20:48 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/15 23:33:28 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	already_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->number > a->next->number)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_2(t_stack **a)
{
	if (*a && (*a)->next)
	{
		if ((*a)->number > (*a)->next->number)
			sa(a);
	}	
}

void	sort_3(t_stack **a)
{
	t_stack	*stack;
	int		bigger;

	bigger = (*a)->number;
	stack = *a;
	while (stack)
	{
		if (stack->number > bigger)
			bigger = stack->number;
		stack = stack->next;
	}
	if ((*a)->number == bigger)
		ra(a);
	else if ((*a)->next->number == bigger)
		rra(a);
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	len;
	int	smaller;

	len = stack_len(*a);
	smaller = get_smaller_nb(*a);
	if (len == 5)
	{
		decide_and_rotate_smaller(a, smaller);
		pb(a, b);
	}
	smaller = get_smaller_nb(*a);
	decide_and_rotate_smaller(a, smaller);
	pb(a, b);
	if (!(already_sorted(*a)))
		sort_3(a);
	while (*b)
		pa(a, b);
}
