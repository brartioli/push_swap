/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   100_order.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:19:21 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/15 23:21:15 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void    sort_100(t_stack **a, t_stack **b)
{
	pass_to_b(a, b);
	pass_to_a(a, b);
}

void    decide_and_rotate_a(t_stack **stack, int chunk)
{
	t_stack *tmp;
	int     pos;
	int     len;

	len = stack_len(*stack);
	pos = 0;
	tmp = *stack;
	while (tmp && tmp->index >= chunk)
	{
		pos++;
		tmp = tmp->next;
	}
	if (!tmp)
		return;
	if (pos <= len / 2)
		ra(stack);
	else
		rra(stack);
}

void	decide_and_rotate_b(t_stack **stack, int bigger)
{
	t_stack	*tmp;
	int		pos;
	int		len;

	len = stack_len(*stack);
	pos = 0;
	tmp = *stack;
	while (tmp && tmp->index != bigger)
	{
		pos++;
		tmp = tmp->next;
	}
	if (!tmp)
		return ;
	if (pos <= len / 2)
		rb(stack);
	else
		rrb(stack);
}

void    pass_to_b(t_stack **a, t_stack **b)
{
	int     chunk;
	int     pushed;

	chunk = 35;
	pushed = 0;
	while (*a)
	{
		if ((*a)->index < chunk)
		{
			pb(a, b);
			pushed++;
			if ((*b)->index < chunk / 2)
				rb(b);
		}
		else if (pushed == chunk)
			chunk += 15;
		else
			decide_and_rotate_a(a, chunk);
	}
}

void	pass_to_a(t_stack **a, t_stack **b)
{
	int	bigger;

	bigger = stack_len(*b) - 1;
	while (*b)
	{
		if ((*b)->index == bigger)
		{
			pa(a, b);
			bigger--;
		}
		else
			decide_and_rotate_b(b, bigger);
	}
}