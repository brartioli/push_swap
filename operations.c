/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:03:34 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/16 18:13:35 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	rotate(t_stack **stack)
{
	t_stack	*init;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	init = *stack;
	*stack = init->next;
	last = last_node(*stack);
	last->next = init;
	init->next = NULL;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*end;
	t_stack	*pen;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	end = *stack;
	pen = NULL;
	while (end->next)
	{
		pen = end;
		end = end->next;
	}
	pen->next = NULL;
	end->next = *stack;
	*stack = end;
}
