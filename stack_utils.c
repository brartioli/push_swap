/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:25:06 by bfernan2          #+#    #+#             */
/*   Updated: 2025/10/13 21:10:31 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

t_stack	*add_node(t_stack **lst, t_stack *new)
{
	if (!new)
		return (NULL);
	new->next = *lst;
	*lst = new;
	return (new);
}

t_stack	*last_node(t_stack *lst)
{
	t_stack	*ptr;

	ptr = lst;
	if (!lst)
		return (NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

t_stack	*add_last(t_stack **stack, t_stack *new)
{
	t_stack	*ptr;

	if (!new)
		return (NULL);
	if (*stack == NULL)
	{
		*stack = new;
		return (new);
	}
	ptr = last_node(*stack);
	ptr->next = new;
	return (new);
}

int	stack_len(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}
