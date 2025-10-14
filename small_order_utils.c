/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_order_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:33:47 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/13 21:12:28 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	get_smaller_nb(t_stack *stack)
{
	int	smaller;

	smaller = stack->number;
	while (stack)
	{
		if (stack->number < smaller)
			smaller = stack->number;
		stack = stack->next;
	}
	return (smaller);
}

int	stack_position(t_stack *stack, int smaller)
{
	int	pos;

	pos = 0;
	while (stack && stack->number != smaller)
	{
		pos++;
		stack = stack->next;
	}
	return (pos);
}

void	decide_and_rotate_smaller(t_stack **a, int smaller)
{
	int	pos;
	int	len;
	int	i;

	pos = stack_position(*a, smaller);
	i = 0;
	len = stack_len(*a);
	if (pos <= len / 2)
	{
		while (i < pos)
		{
			ra(a);
			i++;
		}
	}
	else
	{
		while (i < len - pos)
		{
			rra(a);
			i++;
		}
	}
}
